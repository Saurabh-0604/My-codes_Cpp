#include <iostream>
using namespace std;
int main()
{
    // take a positive integer input and tell if it is even or odd
    int n;
    cout << "enter n = ";
    cin >> n;
    if (n % 2 == 0)
    cout << "even number";
    // if (n % 2 != 0)
    else
        cout << "odd number";
}