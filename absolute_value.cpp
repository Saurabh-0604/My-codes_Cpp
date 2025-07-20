#include <iostream>
using namespace std;
int main()
{
    // take integer input and print the absolute value of that integer
    int n;
    cout << "enter n = ";
    cin >> n;
    // if (n >= 0){
    //     cout <<n;
    // }
    // else{
    //     cout << -n;

    // }

    if (n < 0)
        n = -n;
    cout << n;
}