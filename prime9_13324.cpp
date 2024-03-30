#include<iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    for(i=2;i<n/2;i++){
        if(n%i==0){
        cout<<"prime"<<endl;
        }
    }
    return 0;

    }