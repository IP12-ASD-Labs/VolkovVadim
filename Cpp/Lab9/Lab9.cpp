// Lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const int n = 5;

void fillMatrix(int[n][n]);
void findAndSwapFirstNeg(int[n][n]);
void findAndSwapLastPos(int[n][n]);
void printMatrix(int[n][n]);

int main() {
    int matrix[n][n];
    fillMatrix(matrix);
    printMatrix(matrix);
    findAndSwapFirstNeg(matrix);
    findAndSwapLastPos(matrix);
    printMatrix(matrix);
}

void findAndSwapFirstNeg(int matrix[n][n]) {
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] < 0 && found == -1) found = i;
    }
    int tmp = matrix[found][found];
    matrix[found][found] = matrix[found][n - 1 - found];
    matrix[found][n - 1 - found] = tmp;
}

void findAndSwapLastPos(int matrix[n][n]) {
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] > 0) found = i;
    }
    int tmp = matrix[found][found];
    matrix[found][found] = matrix[found][n - 1 - found];
    matrix[found][n - 1 - found] = tmp;
}

void fillMatrix(int matrix[n][n]) {
    std::srand(std::time(nullptr));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = std::rand() % 199 - 100;
        }
    }
}

void printMatrix(int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4i", matrix[i][j]);
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}