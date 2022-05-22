#ifndef ARRAY_H
# define ARRAY_H
#include "Array.tpp"

template <typename T>
class Array
{
    public :
        Array(void);
        Array(unsigned int)
        Array& operator=(Array const &rhs);
        Array(Array const &src);
        ~Array(void);
        Array& operator[](Array const &rhs);
        int size(void) const;
        public ArrayOutOfLimits : public std::exception
        {
            public :
            virtual const &char *what() const throw();
        };
    private:
        T *_array;
        int _size;
}

#endif
