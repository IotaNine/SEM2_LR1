#pragma once
#include <iostream>

class Vector 
{
private:
    unsigned int n;  //how many elements are important(not junk)
    unsigned int space;  //available space
    int* value;
public:
    Vector();  //default constructor
    Vector(const Vector& other);  //vector replication
    Vector(const int& space, unsigned int& m);  //constructor with parameters
    Vector& operator=(const Vector& other);  //operator "="
    ~Vector();  //destructor
    int& operator[](unsigned int& index);  //operator "[]"
    unsigned int size();  //get number of elements
    int find(const int& element);  //get index of element
    void push_back(const int& element);  //add element to the end
    void replace(const int& oldValue, const int& newValue);  //replace 1 oldValue to newValue
};