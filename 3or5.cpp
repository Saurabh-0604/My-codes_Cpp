#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number =";
    cin >> n;
    if (n % 3 == 0 || n % 5 == 0)
    {
        cout << "divisible by 3 or 5";
    }

    else
    {
        cout << "not divisible";
    }
}