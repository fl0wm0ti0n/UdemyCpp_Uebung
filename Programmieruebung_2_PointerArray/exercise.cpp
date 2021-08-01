#include "exercise.h"
#include <iostream>

// Aufgabe 1
double array_sum(double p_array[], const unsigned int& length)
{
    double tmp = 0;
	
    for (int i = 0; i <= length; i++)
    {
        tmp = tmp + p_array[i];
        std::cout << tmp << std::endl;
    }
    return tmp;
}

// Aufgabe 2
int* array_constructor(const int& value, const unsigned int& length)
{
    int* array = new int[length];

    for (int i = 0; i < length; ++i)
    {
        array[i] = value;
    }

    return array;
}