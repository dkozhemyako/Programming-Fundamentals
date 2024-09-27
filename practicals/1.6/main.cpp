/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Prac 1.6
 */

#include <iostream>
#include <string>

void countBits(unsigned long long A) {
    int count0 = 0, count1 = 0;
    for (int i = 0; i < sizeof(A) * 8; ++i) {
        if (A & (1ULL << i)) {
            count1++;
        }
        else {
            count0++;
        }
    }

    std::cout << "0s: " << count0 << ", 1s: " << count1 << "\n";
    if (count1 > count0) {
        std::cout << "More 1s than 0s.\n";
    }
    else if (count0 > count1) {
        std::cout << "More 0s than 1s.\n";
    }
    else {
        std::cout << "Equal number of 0s and 1s.\n";
    }
}

std::string xorBinarySequences(const std::string& seq1, const std::string& seq2) {
    
    if (seq1.length() != seq2.length()) {
        return "Error: Sequences must be of the same length.";
    }

    std::string result;
    for (size_t i = 0; i < seq1.length(); ++i) {
        
        if (seq1[i] == seq2[i]) {
            result += '0';
        }
        else {
            result += '1';
        }
    }
    return result;
}

int main() {
    unsigned long long A;
    std::cout << "Enter an integer A: ";
    std::cin >> A;

    countBits(A);

    std::string seq1, seq2;
    std::cout << "Enter first binary sequence: ";
    std::cin >> seq1;
    std::cout << "Enter second binary sequence: ";
    std::cin >> seq2;

    std::string xorResult = xorBinarySequences(seq1, seq2);
    std::cout << "XOR result: " << xorResult << "\n";

    return 0;
}

/*
������������ ��� ����������� �������� XOR
����� ��� :
�� ����� ����������� :
seq1: ����� ����������� ���(�����, �� ���������� ���� � 0 �� 1).
seq2 : ����� ����������� ���(�����, �� ���������� ���� � 0 �� 1).
������ :
    ������� ������������� :
����� ����������� ������ ���� �������� �������.���� �, �������� ������� ������� ����������� ��� �������.
�������� :
    ����������� :

    �������� ������� ����� result ��� ��������� ���������� �������� XOR.
    ���� :

    ��� ������� ��� � ���� �������������(�� 0 �� ������� �������������) :
    �������� �������� ��� � seq1 � seq2.
    ���� ��� �������(������ 0 ��� ������ 1), ������ '0' �� result.
    ���� ��� ���(���� 0, ����� 1), ������ '1' �� result.
    ������ ��� :

������� �������� ����������� result �� ��������� �������� XOR.
������� :
    ���� :
    seq1 = "101010"
    seq2 = "110011"
    ����� :
    result = "011001"
*/