// RealFibonacci.h
// Instantiable Subject Class for Proxy Design Pattern
// Source file
//
// Created by Max Hesser-Knoll
// CS 372


#include "RealFibonacci.h"

RealFibonacci::RealFibonacci() {
    fibonacciNumbers.push_back(0);
    fibonacciNumbers.push_back(1);
}

unsigned long RealFibonacci::getFibonacci(int n) {
    
    fibonacciNumbers.clear();
    
    fibonacciNumbers.push_back(0);
    fibonacciNumbers.push_back(1);
    
    for (int i = 0; i <= n; i++)
    {
        fibonacciNumbers.push_back(*(fibonacciNumbers.end()-1) + *(fibonacciNumbers.end()-2));
    }
    
    return fibonacciNumbers.back();
}