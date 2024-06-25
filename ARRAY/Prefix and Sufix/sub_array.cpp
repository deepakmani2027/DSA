#include<iostream>
using namespace std;
int main(){
    int n,a[100];
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int size;
    cout<<"enter size of subarray:";
    cin>>size;
    cout<<"subarray:"<<endl;
    for(int i=0;i<=n-size;i++){
        for(int j=i;j<size+i;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}