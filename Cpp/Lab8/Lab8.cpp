// Lab8.cpp

#include <iostream>

const int width = 4;
const int height = 6;

void fillMatrix(int[height][width]);
void findMaxInColumn(int[height][width], int[]);
void sortArray(int[]);
void printArray(int[]);

int main() {
    int matrix[height][width];
    int arr[width];
    fillMatrix(matrix);
    findMaxInColumn(matrix, arr);
    sortArray(arr);
    printArray(arr);
}

void fillMatrix(int matrix[height][width]) {
    std::srand(std::time(nullptr));
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            matrix[i][j] = std::rand() % 100;
        }
    }
}

void findMaxInColumn(int matrix[height][width], int arr[]) {
    for (int j = 0; j < width; j++) {
        int max = 0;
        for (int i = 0; i < height; i++) {
            if (matrix[i][j] > max) max = matrix[i][j];
        }
        arr[j] = max;
    }
}

void sortArray(int arr[]) {
    for (int k = 1; k < width; k++) {
        int j = k;
        while (arr[k] < arr[k - 1] && k > 0) {
            int tmp = arr[k];
            arr[k] = arr[k - 1];
            arr[k - 1] = tmp;
            k--;
        }
        k = j;
    }
}

void printArray(int arr[]) {
    for (int i = 0; i < width; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}