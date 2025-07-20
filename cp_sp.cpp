#include <iostream>
using namespace std;
int main(){
    // loss===profit
    int cp;
    cout<<"enter cost price = ";
    cin>>cp;
    int sp;
    cout<<"enter selling price = ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit"<<endl;
    }
    if(cp>sp){
        cout<<"loss"<<endl;
    }
    if(cp==sp){
        cout<<"no profit no loss"<<endl;
    }
}