// RealFibonacci.h
// Instantiable Subject Class for Proxy Design Pattern
// Header file
//
// Created by Max Hesser-Knoll
// CS 372


#ifndef REALFIBONACCI_H
#define REALFIBONACCI_H

#include "Fibonacci.h"
#include <vector>

// class RealFibonacci
// This is an instantiable class derived from class Fibonacci.
// FibonacciProxy serves a proxy interface for this class.
class RealFibonacci : public Fibonacci
{
public:
    // Holds generated numbers of fibonacci sequence
    std::vector<unsigned long> fibonacciNumbers;
    
    // default ctor generates and stores 0th and 1st fibonacci number
    RealFibonacci();
    
    // Generates and stores 0th through nth fibonacci numbers
    // and returns the nth fibonacci number on each call
    unsigned long getFibonacci(int n);
    
};

#endif //REALFIBONACCI_H
