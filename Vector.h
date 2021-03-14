#pragma once

#include <iostream>

class Vector {
private:
    int f; //how many elements are important(not junk)
    int n;
    int m;
    int* value;
public:
    Vector();  //default constructor
    Vector(const Vector& other);  //vector replication
    Vector(const int& n, unsigned int& m);  //constructor with parameters
    Vector& operator=(const Vector& other);  //operator "="
    ~Vector();  //destructor
    int& operator[](unsigned int& index);  //operator "[]"
    unsigned int size() const  //get number of elements
    {
        return n;
    }
    int find(const int& element) const  //get index of element
    {
        for (unsigned int i = 0; i < n; i++)
        {
            if (value[i] == element) return i;
        }
        return -1;
    }
    void push_back(const int& element)  //add element to the end
    {
        if (f < n)
        {
            value[f] = element;
        }
        else
        {
            int* temp_value = new int[n + 10];
            for (unsigned int i = 0; i < n; i++)
            {
                temp_value[i] = value[i];
            }
            value = temp_value;
            temp_value = nullptr;
            value[f] = element;
            n += 10;
        }
        f++;
    }
    void replace(const int& oldValue, const int& newValue)  //replace 1 oldValue to newValue
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
};