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
#include <fstream>
using namespace std;
string inputFileName = "input.dat";
string outputFileName = "output.dat";
float mean(int data[]);
float calculateSD(int data[],float m);

int main()
{

    int i;
    int data[4];

    cout << "Enter 4 elements: ";
    for (i = 0; i < 4; ++i) {
        cin >> data[i];
    }

    float m = mean(data);
    cout << endl << m;

    cout << endl << calculateSD(data, m) << endl;
    
    ifstream infile;
    infile.open("NumberIn.txt");
    int num1, num2, num3, num4;
    infile >> num1 >> num2 >> num3 >> num4;
    cout << num1 << "\n" << num2 << "\n" << num3 << "\n" << num4;

    data[0] = num1;
    data[1] = num2;
    data[2] = num3;
    data[3] = num4;

    ofstream outfile;
    outfile.open("Numout.txt");

    m = mean(data);
    float sd = calculateSD(data, m);

    outfile << endl << m;
    outfile << endl << sd << endl;

    return 0;
}

float mean(int data[])
{
    return (data[0]+data[1]+data[2]+data[3])/4.0;
}

float calculateSD(int data[], float m)
{

    float sum = 0.0, standardDeviation = 0.0;
    int i;

    for (i = 0; i < 4; ++i) {
        standardDeviation += pow(data[i] - m, 2);
    }

    return sqrt(standardDeviation / 4.0);

    return 0;
   
}