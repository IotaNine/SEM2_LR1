//
// Created by pcb06 on 16.02.21.
//

#include "Vector.h"
#include <iostream>


//default constructor for 10 elements
Vector::Vector() : n(10)
{
    value = new int[n];
}

//vector replication
Vector::Vector(const Vector &other) : n(other.n)
{
    if (other.n != nullptr)
    {
        for (int i = 0; i < other.n; i++)
        {
            value = other.value;
        }
    }
}

//constructor with parameters
Vector::Vector(const int &n_, unsigned int &m_) : n(n_), m(m_)
{
    value = new int[n];
    for (int i = 0; i < n; i++)
    {
        value[i] = m;
    }
}

//operator "="
Vector& Vector::operator=(const Vector &other)
{
    if (other.n != nullptr)
    {
        n = other.n;
        delete [] value;
        value = new int[n];
        for (int i = 0; i < n; i++)
        {
            value[i] = other.value[i];
        }
    }
    return *this;
}

//destructor
Vector::~Vector()
{
    delete [] value;
}

//operator "[]"
Vector& Vector::operator[](unsigned int &index)
{

}



