#include<iostream>
using namespace std;
int main(){
    int a[100],n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i+=2){
        if((i+1)<n){
            swap(a[i],a[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}