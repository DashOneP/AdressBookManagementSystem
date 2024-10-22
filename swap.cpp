//
// Created by GSL on 24-10-19.
//
#include "swap.h"

void swap1(int* a, int* b) {
    int* temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b << endl;
}
