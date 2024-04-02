// Source.cpp
#include "VectorN.h"
#include "Pair.h"
#include <iostream>

using namespace std;

int main() {
    Pair p1(5, 10);
    Pair p2(20, 30);
    cout << "Pair 1 > Pair 2: " << boolalpha << (p1 > p2) << endl;
    cout << "Pair 1 < Pair 2: " << boolalpha << (p1 < p2) << endl;

    double v1[] = { 1,2,3 };
    double v2[] = { 5,6,7 };
    VectorN vector1(3, v1);
    VectorN vector2(3, v2);

    string vectorStr = static_cast<string>(vector1);
    cout << "Vector1 as string: " << vectorStr << endl;

    VectorN sum = vector1 + vector2;
    string result_sum = static_cast<string>(sum);
    cout << "vector1 + vector2: " << result_sum << endl;

    VectorN difference = vector1 - vector2;
    string result_difference = static_cast<string>(difference);
    cout << "vector1 - vector2: " << result_difference << endl;

    VectorN dot = vector1 * vector2;
    string result_dot = static_cast<string>(dot);
    cout << "vector1 * vector2: " << result_dot << endl;

    VectorN vector4 = ++vector2;
    string r_va4 = static_cast<string>(vector4);
    cout << "Result after post-increment: " << r_va4 << endl;

    VectorN vector5 = vector2++;
    string r_v4 = static_cast<string>(vector5);
    cout << "Result after pre-decrement: " << r_v4 << endl;

    VectorN vector6 = --vector1;
    string r_va6 = static_cast<string>(vector6);
    cout << "Result after post-decrement: " << r_va6 << endl;

    VectorN vector7 = vector1--;
    string r_v7 = static_cast<string>(vector7);
    cout << "Result after pre-increment: " << r_v7 << endl;

    // Оператори порівняння
    cout << "Vector1 == Vector2: " << boolalpha << (vector1 == vector2) << endl;
    cout << "Vector1 != Vector2: " << boolalpha << (vector1 != vector2) << endl;
    cout << "Vector1 >= Vector2: " << boolalpha << (vector1 >= vector2) << endl;
    cout << "Vector1 <= Vector2: " << boolalpha << (vector1 <= vector2) << endl;

    // Виведення розміру класу без pragma pack
    cout << "Size of Vector3D class without #pragma pack: " << sizeof(VectorN) << " bytes" << endl;

    // Виведення розміру класу з pragma pack(1)
#pragma pack(1)
    cout << "Size of Vector3D class with #pragma pack(1): " << sizeof(VectorN) << " bytes" << endl;


    return 0;
}
