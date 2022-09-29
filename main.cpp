/*
Carter Essing
C++ fall 2022
Due: September 28, 2022
Lab 3: writing a C++ program
This lab is having us write an interactive C++ program that computes and outputs the mean and
population standard deviation of a set of four integers
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
string inputFileName = "input.dat";
string outputFileName = "output.dat";
float calculateSD(float data[]);

int main()
{

        int i;
    float data[4];

    cout << "Enter 4 elements: ";
    for (i = 0; i < 4; ++i) {
        cin >> data[i];
    }

    cout << endl << "Standard Deviation = " << calculateSD(data);

    return 0;
}

float calculateSD(float data[])
{
    
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;

    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }

    mean = sum / 10;

    for (i = 0; i < 10; ++i) {
        standardDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standardDeviation / 10);

    return 0;
}