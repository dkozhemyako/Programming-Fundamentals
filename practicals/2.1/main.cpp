/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Prac 2.1
 */

#include <iostream>
#include <vector>

int main() {
    int m; 
    std::cout << "Enter the number of sequences: ";
    std::cin >> m;

    std::vector<std::vector<int>> A(m);

    
    for (int i = 0; i < m; i++) {
        int n; 
        std::cout << "Enter the number of elements in the sequence " << i + 1 << ": ";
        std::cin >> n;

        A[i].resize(n);
        std::cout << "Enter element: ";
        for (int j = 0; j < n; j++) {
            std::cin >> A[i][j]; 
        }
    }

    
    int minValue = A[0][0];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < A[i].size(); j++) {
            if (A[i][j] < minValue) {
                minValue = A[i][j]; 
            }
        }
    }

    int maxNegative = 0; 
    bool foundNegative = false; 

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < A[i].size(); j++) {
            if (A[i][j] < 0) {
                if (!foundNegative || A[i][j] > maxNegative) {
                    maxNegative = A[i][j]; 
                    foundNegative = true;
                }
            }
        }
    }

    std::cout << "Min: " << minValue << std::endl;

    if (foundNegative) {
        std::cout << "Max neg.: " << maxNegative << std::endl;
    }
    else {
        std::cout << "No neg." << std::endl;
    }

    return 0;
}
