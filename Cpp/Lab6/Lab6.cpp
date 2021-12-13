// Lab6.cpp

#include <iostream>
#include <windows.h>

double geomProgSum(double n) {
    double returnVal;
    if (n > 1) {
        returnVal = n + geomProgSum(n / 2);
    } else {
        returnVal = 1.0;
    }
    return returnVal;
}
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    double result = geomProgSum(50.0);
    std::cout << "Результат: " << result << "\n";
}