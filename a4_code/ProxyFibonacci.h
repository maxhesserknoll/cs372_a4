// ProxyFibonacci.h
// Proxy Class for Proxy Design Pattern
// Header file
//
// This proxy class restricts access to the fibonacci sequence generated
// and stored by RealFibonacci so that it cannot be modified. It also
// maintains the vector storing the generated fibonacci sequence so that
// it can access previously calculated values without recalculating the
// entire sequence. If a fibonacci number that has not yet been calculated
// is requested, then new fibonacci numbers are added to the already
// existing vector of fibnacci numbers. This stops redundant recalculation
// of the Fibonacci sequence.
//
// Created by Max Hesser-Knoll
// CS 372


#ifndef PROXY_H
#define PROXY_H

#include "RealFibonacci.h"
#include <memory>

// class ProxyFibonacci
// Proxy class derived from class Fibonacci
// Serves as proxy interface for object of class RealFibonacci
class ProxyFibonacci : public Fibonacci
{
private:
    // ptr to RealFibonacci object being proxied
    std::shared_ptr<RealFibonacci> realFibonacci;
    
public:
    // Default ctor dynamically allocates new RealFibonacci object
    ProxyFibonacci() : realFibonacci(std::make_shared<RealFibonacci>())
    {}
    
    // ctor takes pointer to RealFibonacci object to be proxied
    ProxyFibonacci(RealFibonacci* realFibonacciPtr) : realFibonacci(realFibonacciPtr)
    {}
    
    // Forward calls to RealFibonacci object
    unsigned long getFibonacci(int n);
};

#endif //PROXY_H
