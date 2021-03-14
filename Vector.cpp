#include "Vector.h"
#include <iostream>


//default constructor for 10 elements
Vector::Vector()
{
    f = 0;
    n = 10;
    value = new int[n];
}

//vector replication
Vector::Vector(const Vector& other)
{
    f = other.f;
    n = other.n;
    if (other.value != nullptr)
    {
        value = new int[n];
        for (int i = 0; i < other.n; i++)
        {
            value[i] = other.value[i];
        }
    }
}

//constructor with parameters
Vector::Vector(const int& n_, unsigned int& m_)
{
    n = n_;
    m = m_;
    f = n;
    value = new int[n];
    for (int i = 0; i < n; i++)
    {
        value[i] = m;
    }
}

//operator "="
Vector& Vector::operator=(const Vector& other)
{
    if (other.value != nullptr)
    {
        n = other.n;
        delete[] value;
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
    delete[] value;
}

//operator "[]"
int& Vector::operator[](unsigned int& index)
{
        return value[index];
}