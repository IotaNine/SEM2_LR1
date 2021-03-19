// SEM2_LR1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector.h"

//void PRINT(Vector& Vec)
//{
//    for (unsigned int i = 0; i < Vec.size() ; i++)
//    {
//        std::cout << Vec[i] << std::endl;
//    }
//    std::cout << "DONE" << std::endl << std::endl;
//}

std::ostream& operator<<(std::ostream& out, Vector& Vec)
{
    for (unsigned int i = 0; i < Vec.size(); i++)
    {
        out << Vec[i] << std::endl;
    }
    out << "DONE" << std::endl << std::endl;
    return out;
}

int main()
{
    const int n = 4;
    unsigned int m = 0;
    Vector H;
    Vector D(n, m);
    Vector G(D);
    std::cout << H;
    std::cout << D;
    std::cout << G;
    std::cout << "Position of element '0': " << G.find(0) << std::endl;
    G.push_back(7);
    std::cout << G;
    std::cout << "Position of element '7': " << G.find(7) << std::endl;
    G.replace(7, 122);;
    std::cout << G;
}