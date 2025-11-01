// ConsoleApplication18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, k;
    cout << "Enter values for n, m and k: ";
    cin >> n >> m >> k;

    string firstPositionNumberString = to_string(n); 
    
    cout << firstPositionNumberString[k - 1] << endl;

    string secondPositionNumberString = to_string(m);

    cout << secondPositionNumberString[k - 1] << endl;


    cout << "n: " << n << endl;
    cout << "m: " << m << endl;
    cout << "k: " << k << endl;



    return 0;
}
// To fix the error, I removed the invalid line 'm=' which was causing a compilation error as it is not a valid declaration or statement in C++.
// If you intended to declare or initialize a variable 'm', you should do so with a type, e.g.:
// int m = 0;

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
