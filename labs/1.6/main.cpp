/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Lab 1.6
 */

#include <iostream>

int main() {
    // ===== Перше завдання =====

    char symbol1, symbol2, symbol3;

    const char constantSymbol1 = 'S';
    const char constantSymbol2 = '6';
    const char constantSymbol3 = '?';

    char initSymbol1 = constantSymbol1;
    char initSymbol2 = constantSymbol2;
    char initSymbol3 = constantSymbol3;

    symbol1 = 0x11; // 'S'
    symbol2 = 0x4f; // '6'
    symbol3 = 0x2c; // '?'

    // ===== Друге завдання =====
    int intVar;
    float floatVar;
    unsigned short ushortVar;

    intVar = 9742;
    floatVar = -3.54e3;
    ushortVar = 34033;

    double doubleVar;
    int intVar2;
    char charVar;

    doubleVar = floatVar; // float -> double (неявне приведення)

    intVar2 = static_cast<int>(ushortVar); // unsigned short -> int (явне приведення)

    charVar = *(reinterpret_cast<char*>(&intVar)); // int -> char (обхід суворої типізації)

    return 0;
}


