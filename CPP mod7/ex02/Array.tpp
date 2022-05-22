#ifndef ARRAY_T

# define ARRAY_T
# include "Array.hpp"
# include <iostream>

template <typename T>
Array<T>::Array(void)
{
    return;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
    return ;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const  &rhs)
{
    if(this == &rhs)
        return(*this);
    return(*this);
}

template <typename T>
T& & Array<T>::operator[](Array const &rhs)
{


}

template <typename T>
Array<T>::Array(Array const & src)
{
    *this = src;
    return ;
}

template <typename T>
Array<T>::~Array(void)
{
    return ;
}

template <typename T>
int size(void) const
{
    return (size);
}

#ifndef
