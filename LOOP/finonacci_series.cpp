#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,nextterm,n;
    cout<<"enter n";
    cin>>n;
    cout<<a<<" "<<b<<" " ;
    for(int i=3; i<=n;i++){
        nextterm=a+b;
        cout<<nextterm<<" ";
        a=b;
        b=nextterm;
    }
}