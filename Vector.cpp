#include "Vector.h"
#include <iostream>


//default constructor for 10 elements
Vector::Vector()
{
    n = 0;
    space = 10;
    value = new int[n];
}

//vector replication
Vector::Vector(const Vector& other)
{
    n = other.n;
    space = other.space;
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
Vector::Vector(const int& space_, unsigned int& e)
{
    space = space_;
    n = space;
    value = new int[n];
    for (int i = 0; i < space; i++)
    {
        value[i] = e;
    }
}

//operator "="
Vector& Vector::operator=(const Vector& other)
{
    if (this != &other and other.value != nullptr)
    {
        space = other.space;
        delete[] value;
        value = new int[space];
        for (int i = 0; i < space; i++)
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

//get number of elements
unsigned int Vector::size()
{
    return n;
}

//get index of element
int Vector::find(const int& element)
{
    for (unsigned int i = 0; i < n; i++)
    {
        if (value[i] == element) return i;
    }
    return -1;
}

//add element to the end
void Vector::push_back(const int& element)
{
    if (n < space)
    {
        value[n] = element;
    }
    else
    {
        int* temp_value = new int[space + 10];
        for (unsigned int i = 0; i < space; i++)
        {
            temp_value[i] = value[i];
        }
        int* buff = value;
        delete[] buff;
        value = temp_value;
        value[n] = element;
        space += 10;
    }
    n++;
}

//replace 1 oldValue to newValue
void Vector::replace(const int& oldValue, const int& newValue)
{
    bool isReplaced = false;
    unsigned int i = 0;
    while (!isReplaced or i < n)
    {
        if (value[i] == oldValue)
        {
            value[i] = newValue;
            isReplaced = true;
        }
        i++;
    }
}