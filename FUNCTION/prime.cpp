#include<iostream>
using namespace std;
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i ==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    if(isPrime(n)){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}