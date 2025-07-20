#include <iostream>
using namespace std;
int main(){
    //take 3 inputs and tell if they can be sides of triangle
    int a,b,c;
    cout<<"enter the side a =";
    cin>>a;
    cout<<"enter the side b =";
    cin>>b;
    cout<<"enter the side c =";
    cin>>c;
    if((a+b)>c && (b+c)>a &&  (c+a)>b){
        cout<<"it is a valid triangle";
    }
    else{
        cout<<"not a valid triangle";
    }
}