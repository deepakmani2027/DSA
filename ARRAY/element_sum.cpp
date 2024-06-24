#include<iostream>
using namespace std;
int  main(){
    int n,a[100],sum=0;
    cout<<"enter size:";
    cin>>n;
    cout<<"print array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<"sum of element of array:"<<sum;
}