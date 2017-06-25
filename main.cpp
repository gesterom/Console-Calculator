#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>

using namespace std;

#include <Print.h>
#include <Add.h>
#include <Mul.h>
#include <Operator.h>
#include <Calculate.h>
#include <Operator_Parser.h>


bool check(std::string s, int i){
    char a = s[i];
    switch(a){
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case '0':
    case '.':
        return true;
    default:
        return false;
    }
}

struct expression{
    std::vector<Argumnet*> args;
    std::vector<Oper*> op;
};

expression pars_expression(std::string input){
    std::vector<Argumnet*> tab;
    std::vector<Oper*> operends;
    Operator_Parser pars;

    std::string temp="";
    for(unsigned int i=0;i<=input.size();i++){
        if(check(input,i)){
            temp+=input[i];
        }
        else{
            if(temp!="")
            tab.push_back(new Argumnet(atof(temp.c_str())));
            temp="";
            Oper* o = pars.operat(input[i]);
            if(o == NULL)
                continue;
            else{
                operends.push_back(o);
            }
        }
    }
    expression ret;
    ret.args = tab;
    ret.op = operends;
    return ret;
}

//std::list<I_Node*> insert ( std::vector<Argumnet*> arg){
//    std::list<I_Node*> n;
//    for(int i=arg.size();i>0;i--){
//        n.insert(n.begin(),arg[i]);
//    }
//    return n;
//}

std::vector<I_Node*> insert ( std::vector<Argumnet*> arg){
    std::vector<I_Node*> n;
    n.resize(arg.size());
    for(unsigned int i=0;i<arg.size();i++){
        n[i]=(I_Node*)arg[i];
    }
    return n;
}

unsigned int find_max_value_index(std::vector<Oper*> tab){
    int max_priority=0;
    unsigned int ret=0;
    for(unsigned int i=0;i<tab.size();i++){
        if(tab[i]->priority > max_priority){
            max_priority = tab[i]->priority;
            ret=i;
        }
    }
    return ret;
}

I_Node* crete_model(expression exp){

    std::vector<I_Node*> tab = insert(exp.args);
    std::vector<Oper*> tab_oper = exp.op;
    for(Oper* item : tab_oper)
    for(;tab_oper.size()>0;){
//        cout<<"Iteration\n";
//        cout<<"Iteration 2\n";
        for(Oper* item : tab_oper){
            cout<<item->str->representation()<<" ";
        }
        cout<<endl;
        unsigned int temp = find_max_value_index(tab_oper);
        cout<<"Max "<<temp<<endl;
        Operator* temp_op = new Operator(tab[temp],tab[temp+1],tab_oper[temp]->str);
        //cout<<"temp_op\n";
        tab_oper.erase(tab_oper.begin()+temp);
        //cout<<"tab_oper erase "<<tab_oper.size()<<endl;
        tab[temp] = (I_Node*)temp_op;
        //cout<<"tab[temp] = (I_Node*)temp_op;\n";
        tab.erase(tab.begin()+temp+1);
        //cout<<"tab.erase(tab.begin()+temp+1) "<<tab.size()<<endl;

        if(tab.size()==1)
            break;
        }
//        cout<<"last\n";
    return tab[0];
}

int main()
{
//    cout << "Hello world!" << endl;

    string input="";
    getline(cin,input);
    expression temp = pars_expression(input);
    Calculate cal(temp.args.size()+32);
    I_Node* value = crete_model(temp);
//    cout<<"visit\n";
    Print p;
    value->Accept((I_Visitor*)&cal);
    cout<<"Value: "<<cal.get()<<endl;
    cout<<"ONP: ";
    value->Accept((I_Visitor*)&p);

    return 0;
}

