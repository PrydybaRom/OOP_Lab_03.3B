#pragma once

#include <iostream>

class Pair {
protected:
    int first;
    int second;

public:
    Pair();
    Pair(int firstValue, int secondValue);
    Pair(const Pair& other);
    Pair(int value);

    bool operator>(const Pair& other) const;
    bool operator<(const Pair& other) const;
    bool operator==(const Pair& other) const;
    bool operator!=(const Pair& other) const;
    bool operator>=(const Pair& other) const;
    bool operator<=(const Pair& other) const;

    friend std::istream& operator>>(std::istream& is, Pair& pair);
    friend std::ostream& operator<<(std::ostream& os, const Pair& pair);
};



