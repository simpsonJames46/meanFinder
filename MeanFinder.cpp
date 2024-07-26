// MeanFinder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double inputList[] = { 3, 4, 5, 6, 7, 8, 9};
    int inputListSize = sizeof(inputList) / sizeof(double);
    double sum = 0;
    for (auto& num : inputList) {
        sum += num;
    }
    double mean = (sum / inputListSize);
    cout << mean;
    return 0;
}