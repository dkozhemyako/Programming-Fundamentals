/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * RGR
 */

#include <iostream>
#include <cstring> 

using namespace std;

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

bool isLetter(char ch) {
    return ch >= 'P' && ch <= 'Z';
}

bool isValidChain(char chain[]) {

    if (chain[0] != '+') {
        return false;
    }

    int i = 1; 

    while (chain[i] != '\0' && isDigit(chain[i])) {
        i++;
    }

    if (i == 1) {
        return false;
    }

    if (chain[i] != '\0' && isLetter(chain[i])) {
        while (chain[i] != '\0' && isLetter(chain[i])) {
            i++;
        }
        return chain[i] == '\0';
    }

    return false;
}

int main() {
   
    const char* chains[] = {
        "+7888SRT",   
        "+SRT",        
        "+7888"        
    };

    for (int i = 0; i < 3; i++) {
        cout << "Chain: " << chains[i] << " - ";
        if (isValidChain(const_cast<char*>(chains[i]))) {
            cout << "valid" << endl;
        }
        else {
            cout << "not valid" << endl;
        }
    }

    return 0;
}



