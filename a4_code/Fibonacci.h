// Fibonacci.h
// Abstract Base Class for Proxy Design Pattern
// There is no associated source file
//
// Created by Max Hesser-Knoll
// CS 372


#ifndef FIBONACCI_H_INCLUDED
#define FIBONACCI_H_INCLUDED

// class Fibbonacci
// Defines interface for derived classes in proxy design pattern.
// Abstract Base Class for class that will return the nth
// Fibonacci number starting with F_0 = 0.
class Fibonacci
{
public:
    // getFibonacci returns the nth fibonacci number
    virtual unsigned long getFibonacci(int n) = 0;
    
    virtual ~Fibonacci() {}
};

#endif //FIBONACCI_H_INCLUDED
