// Lab7.cpp

#include <iostream>

void initArrays(char[], char[]);
void fillArrayC(char[], char[], char[]);
void printArray(const char[], char[]);
double findAverage(char[]);

int const n = 10;

int main() {
    char arrayA[n];
    char arrayB[n];
    char arrayC[n];
    initArrays(arrayA, arrayB);
    fillArrayC(arrayA, arrayB, arrayC);
    double avrg = findAverage(arrayC);
    printArray("ArrayA: ", arrayA);
    printArray("ArrayB: ", arrayB);
    printArray("ArrayC: ", arrayC);
    std::cout << "Average of numbers > 55 is " << avrg << "\n";
}

void initArrays(char arrayA[], char arrayB[]) {
    for (int i = 0; i < n; i++) {
        arrayA[i] = 45 + 2 * i;
        arrayB[i] = 61 - 2 * i;
    }
}

void fillArrayC(char arrayA[], char arrayB[], char arrayC[]) {
    for (int i = 0; i < n; i++) {
        arrayC[i] = 0;
        for (int j = 0; i < n && arrayC[i] == 0; j++) {
            if (arrayA[i] == arrayB[j]) arrayC[i] = arrayA[i];
        }
    }
}

double findAverage(char arr[]) {
    double total = 0;
    double amount = 0;
    for (int i = 0; i < n; i++) {
        if (int(arr[i]) > 55) {
            total += double(arr[i]);
            amount++;
        }
    }
    return total / amount;
}

void printArray(const char msg[], char arr[]) {
    std::cout << msg << ": ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}