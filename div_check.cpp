#include <iostream>
using namespace std;
int main()
{
    // taking integer input and tell if it is divisible by 5 or 3 but divisible by 15
    int n;
    cout << "enter the number =";
    cin >> n;
    if (n <= 0)
    {
        cout << "Please enter a positive number only.";
    }
    if ((n % 3 == 0 || n % 5 == 0) && (n % 15 != 0))
    {
        cout << "divisible by 3 or 5 but not by 15";
    }

    else
    {
        cout << "not divisible by 3 or 5 or divisible by 15";
    }
}