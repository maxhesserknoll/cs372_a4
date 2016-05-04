// ProxyFibonacci.cpp
// Proxy Class for Proxy Design Pattern
// Source file
//
// Created by Max Hesser-Knoll
// CS 372


#include "ProxyFibonacci.h"

unsigned long ProxyFibonacci::getFibonacci(int n) {
    if (n<0)
    {
        throw;
    }
    if (realFibonacci->fibonacciNumbers.size()-1 >= n)
    {
        return realFibonacci->fibonacciNumbers[n];
    }
    else
    {
        int newfibonacciNumbers = n - (realFibonacci->fibonacciNumbers.size() - 1) ;
        for (int i = 0; i < newfibonacciNumbers; i++)
        {
            realFibonacci->fibonacciNumbers.push_back(*(realFibonacci->fibonacciNumbers.end()-1) + *(realFibonacci->fibonacciNumbers.end()-2));
        }
        return realFibonacci->fibonacciNumbers.back();
    }
}