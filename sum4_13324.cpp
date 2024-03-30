#include<iostream>
using namespace std;

int main(){
    int a,i,sum=0;
    cin>>a;
    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    cout<<"the sum of numbers is "<<sum<<endl;
    return 0;
}