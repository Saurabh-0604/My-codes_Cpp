#include <iostream>
using namespace std;
int main()
// taking integer and tell if it is a 3 digit number
{
    int n;
    cout << "enter n = ";
    cin >> n;
    if (n > 99 && n < 1000)  //&& --> logical operator/logical and(and)
    { // intersection both should strictly  greater(99) and strictly smaller(1000)
        cout << "3 Digit Number";
    }
    else
    {
        cout << "Not A 3 Digit Number";
    }
}