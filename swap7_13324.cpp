#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    b=a+b;
    a=b-a;
    b=b-a;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}