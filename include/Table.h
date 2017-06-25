#ifndef TABLE_H
#define TABLE_H

template <typename T>
class Table
{
    public:
        Table(int size);
        T& get(int index);
        virtual ~Table();

    protected:

    private:
        T* data;
        int size;
};

#endif // TABLE_H
