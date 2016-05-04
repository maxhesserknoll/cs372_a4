// main.cpp
// Example code for Proxy Design Pattern
//
// Created by Max Hesser-Knoll
// CS 372
// Assignment 4



#include "ProxyFibonacci.h"
#include <iostream>

int main() {
    
    // Example using default ctor
    ProxyFibonacci testProxy;
    
    std::cout << testProxy.getFibonacci(10) << std::endl;
    
    std::cout << testProxy.getFibonacci(9) << std::endl;
    
    std::cout << testProxy.getFibonacci(0) << std::endl;
    
    std::cout << testProxy.getFibonacci(11) << std::endl;
    
    std::cout << testProxy.getFibonacci(12) << std::endl;
    
    std::cout << testProxy.getFibonacci(93) << std::endl;
    
    std::cout << testProxy.getFibonacci(93) << std::endl;
    
    
    // Example using single parameter ctor
    ProxyFibonacci testProxy2(new RealFibonacci);
    
    std::cout << testProxy2.getFibonacci(10) << std::endl;
    
    std::cout << testProxy2.getFibonacci(9) << std::endl;
    
    std::cout << testProxy2.getFibonacci(0) << std::endl;
    
    std::cout << testProxy2.getFibonacci(11) << std::endl;
    
    std::cout << testProxy2.getFibonacci(12) << std::endl;
    
    std::cout << testProxy2.getFibonacci(93) << std::endl;
    
    std::cout << testProxy2.getFibonacci(93) << std::endl;
    
    return 0;
}