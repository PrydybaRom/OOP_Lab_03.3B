#include "Pair.h"

Pair::Pair() : first(0), second(0) {}
Pair::Pair(int firstValue, int secondValue) : first(firstValue), second(secondValue) {}
Pair::Pair(const Pair& other) : first(other.first), second(other.second) {}
Pair::Pair(int value) : first(value), second(value) {}

bool Pair::operator>(const Pair& other) const {
    return (first > other.first) || (first == other.first && second > other.second);
}

bool Pair::operator<(const Pair& other) const {
    return other > *this;
}

bool Pair::operator==(const Pair& other) const {
    return first == other.first && second == other.second;
}

bool Pair::operator!=(const Pair& other) const {
    return !(*this == other);
}

bool Pair::operator>=(const Pair& other) const {
    return !(*this < other);
}

bool Pair::operator<=(const Pair& other) const {
    return !(*this > other);
}

std::istream& operator>>(std::istream& is, Pair& pair) {
    is >> pair.first >> pair.second;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Pair& pair) {
    os << "(" << pair.first << ", " << pair.second << ")";
    return os;
}
