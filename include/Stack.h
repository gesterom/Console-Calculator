#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack
{
    public:
        Stack(const int size);
        void push(T);
        T pop();
        virtual ~Stack();

    protected:

    private:
        int size;
        T* tab;
        int index;
};

template <typename T>
Stack<T>::Stack(int size)
{
    //ctor
    this->tab = new T[size];
    this->size=size;
    this->index=size-1;
}

template <typename T>
Stack<T>::~Stack()
{
    //dtor
    delete[] this->tab;
}

template <typename T>
void Stack<T>::push(T value){
    if(index<=0)
        throw new int;
    tab[index]=value;
    index--;
    return;
}

template <typename T>
T Stack<T>::pop(){
    if(index>=size)
        throw new int;
    return tab[++index];
}

#endif // STACK_H
