#pragma once
#include <iostream>

class swap
{
private:
    /* data */
    int _a;
    int _b;

public:
    swap(int a, int b)
    {
        this->_a = a;
        this->_b = b;
    }
    // ~swap();
    void run();
    void printInfo();
};

// swap::swap(int a, int b)
// {
//     this->_a = a;
//     this->_b = b;
// }

// swap::~swap()
// {
// }
