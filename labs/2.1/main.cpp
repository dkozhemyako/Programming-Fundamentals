/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Lab 2.1
 */

#include <iostream>
using namespace std;

int main() {
    // Task 1
    float arr[9];
    int size = 9;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            arr[i] = static_cast<float>(-6.2 + i);
        }
        else {
            arr[i] = static_cast<float>(i + 5.1);
        }
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Task 1:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    // Task 2
    int arr1[10];
    int arr2[10];
    int arr3[10];

    for (int i = 0; i < 10; i++) {
        arr1[i] = 2 * i + 23;
        arr2[i] = 49 - 2 * i;
    }

    int k = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k] = arr1[i];
                k++;
                break;
            }
        }
    }

    cout << "Task 2:" << endl;
    for (int i = 0; i < k; i++) {
        cout << arr3[i];
        if (i < k - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    if (k > 0) {
        int max = arr3[0];
        int min = arr3[0];

        for (int i = 1; i < k; i++) {
            if (arr3[i] > max) {
                max = arr3[i];
            }
            if (arr3[i] < min) {
                min = arr3[i];
            }
        }

        int diff = max - min;

        cout << "Max in arr3: " << max << endl;
        cout << "Min in arr3: " << min << endl;
        cout << "Difference: " << diff << endl;
    }
    else {
        cout << "No identical elements between arr1 and arr2." << endl;
    }

    // Task 3
    //4x5
    cout << "Research on multidimensional arrays" << endl;
    cout << "Task 3:" << endl;

    double arr4[4][5];
    double arr5[4];
    double first = 0.1;


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            arr4[i][j] = first;
            cout << arr4[i][j] << endl;
            first++;
        }
    }


    for (int i = 0; i < 4; i++) {
        double var = 1;
        for (int j = 0; j < 5; j++) {
            var *= arr4[i][j];
        }
        arr5[i] = var;
    }


    for (int i = 0; i < 4; i++) {
        cout << arr5[i];
        if (i < 3) {
            cout << ", ";
        }
    }
    cout << endl;

    //4x4
    int arr6[4][4] = {
        {1, 2, 3, 4},
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34}
    };

    int arr7[4] = { 0 };


    for (int j = 0; j < 4; j++) {
        arr7[j] = arr6[0][j];
        for (int i = 1; i < 4; i++) {
            if (arr6[i][j] > arr7[j]) {
                arr7[j] = arr6[i][j];
            }
        }
    }

    for (int j = 0; j < 4; j++) {
        cout << j + 1 << ": " << arr7[j] << endl;
    }

    return 0;
}
