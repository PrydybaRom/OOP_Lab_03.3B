
#pragma once
#include "Pair.h"
#include <iostream>
using namespace std;

class VectorN : public Pair {
protected:
    int N;
    double* a;
public:
    // ŒÕ—“–” “Œ–»
    VectorN();
    VectorN(int size, double* values);
    VectorN(const VectorN& other);
    ~VectorN();

    // SET GET
    void SetN(int value);
    void SetA(double* value);
    int GetN() const;
    double* GetA() const;

    VectorN& operator=(const VectorN& other);
    VectorN operator+(const VectorN& other) const;
    VectorN operator-(const VectorN& other) const;
    VectorN operator*(const VectorN& other) const;

    VectorN& operator++();
    VectorN operator++(int);
    VectorN& operator--();
    VectorN operator--(int);

    //OPERATOR string
    operator string() const;

};


