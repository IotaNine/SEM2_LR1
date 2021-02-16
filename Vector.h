//
// Created by pcb06 on 16.02.21.
//

#ifndef UNTITLED_VECTOR_H
#define UNTITLED_VECTOR_H


class Vector {
private:
    int n;
    int m;
    int *value;
public:
    Vector();
    Vector(const Vector &other);
    Vector(const int &n, unsigned int &m);
    Vector& operator=(const Vector &other);
    ~Vector();
    int& operator[](unsigned int &index);
    unsigned int size() const;
    int find(const int &value) const;
    void push_back(const int &value);
    void replace(const int &oldValue, const int &newValue);
};


#endif //UNTITLED_VECTOR_H
