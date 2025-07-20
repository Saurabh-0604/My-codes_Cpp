#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number =";
    cin >> n;
    // if(n%3==0 && n%5==0){
    //     cout<<"divisible by 3 and 5";
    // }
    if (n % 15 == 0)
    {
        cout << "divisible by 5 and 3";
    }

    else
    {
        cout << "not divisible";
    }
}