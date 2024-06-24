#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r){
    int combination=  factorial(n)/(factorial(r)*factorial(n-r));
    return combination;                                                                                     //nCr  ==  (n!)/((r!) * (n-r)!)
}
int main(){
    int n,r;
    cout<<"enter n and r:";
    cin>>n>>r;
    cout<<"answer is:"<<nCr(n,r)<<endl;
}