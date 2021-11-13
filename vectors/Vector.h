

template<typename T>
class Vector
{

    // data member
    T *arr;
    int cs;
    int ms;

public:
    Vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }

    void push_back(T d)
    {
        if (cs == ms)
        {
            // double the capacity and add element
            T *old_array = arr;
            ms = ms * 2;
            arr = new T[ms];

            // copy the elements

            for (int i = 0; i < cs; i++)
            {
                arr[i] = old_array[i];
            }

            // deleting the old array
            delete[] old_array;
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back()
    {

        if (cs >= 0)
        {
            cs--;
        }
    }

    bool is_empty() const 
    {
        return cs == 0;
    }

    T get_front() const
    {
        return arr[0];
    }

    T get_end()
    {
        return arr[cs - 1];
    }

    T at(int i)
    {
        return arr[i];
    }

    int size()
    {
        return cs;
    }

    int capacity()
    {
        return ms;
    }

    T operator[](int i){
        return arr[i];
    }

};
