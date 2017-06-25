#include "Table.h"

template <typename T>
Table<T>::Table(int size)
{
    //ctor
    data = new T[size];
    this->size = size;
}

template <typename T>
Table<T>::~Table()
{
    //dtor
    delete[] data;
}

template <typename T>
T& Table<T>::get(int index){
    if(index<0)
        throw new int;
    if(index>size)
        throw new int;
    return data[index];
}
