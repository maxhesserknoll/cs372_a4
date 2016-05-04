# cs372_a4
CS 372 Assignment 4 - Max Hesser-Knoll

This code implements the Proxy design pattern.

The abstract base class Fibonacci defines the interface for the derived classes. It has a single pure virtual member function, getFibonacci, which accepts an int and returns an unsigned long. This function is meant to return the nth fibonacci number.

The class RealFibonacci, derived from Fibonacci, is the class that the proxy interface is applied to. This is an instantiable class with an implementation of getFibonacci that creates a vector holding the 0 through nth fibonacci numbers and returns the nth fibonacci number. It recalculates the 0 through nth Fibonacci numbers each time it is called.

The class ProxyFibonacci, derived from Fibonacci, is the proxy interface for a RealFibonacci object. This proxy class restricts access to the fibonacci sequence generated and stored by RealFibonacci so that it cannot be modified. It also maintains the vector storing the generated fibonacci sequence so that it can access previously calculated values without recalculating the entire sequence. If a fibonacci number that has not yet been calculated is requested, then new fibonacci numbers are added to the already existing vector of fibnacci numbers. This stops redundant recalculation of the Fibonacci sequence.


The file main.cpp contains a short example of using the implemented proxy design pattern to calculate large and small fibonacci numbers through the proxy class interface.


Sources Used: 

http://www.bogotobogo.com/DesignPatterns/proxy.php

https://sourcemaking.com/design_patterns/proxy
