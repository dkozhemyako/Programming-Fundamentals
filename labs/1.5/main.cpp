/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Lab 1.5
 */

#include <iostream>

using namespace std;

int main() {
    // Перше завдання
    float A1 = 3.56;
    float B1 = 89.45;
    int C1 = 15;
    float D1 = 56.2;

    bool result = !(!(A1 != B1) && (!(C1 < D1)));
    cout << "Результат виразу 1: " << (result ? "true" : "false") << endl;

    // Друге завдання
    int A2 = 593;
    int B2 = -145;
    float C2 = 9.23;
    int D2 = 43;
    int E = 891;

    short F = A2 ^ (-B2 / (sizeof(C2) > D2) * E) >> D2;
    cout << "Результат виразу 2: " << F << endl;

    return 0;
}