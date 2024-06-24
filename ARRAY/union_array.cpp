#include<iostream>
using namespace std;
int main(){
    int n,m,a[100],b[100];
    cout<<"enter size of array 1:";
    cin>>m;
    cout<<"enter size of array 2:";
    cin>>n;
    cout<<"enter 1st array:"<<endl;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"enter 2nd array:"<<endl;
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    cout<<"union of 2 array:";
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i] < b[j]){
            cout<<a[i++]<<" ";
        }
        else if(a[i] > b[j]){
            cout<<b[j++]<<" ";
        }
        else if(b[j]==b[j]){
            j++;
        }
        else if(a[i]==a[i]){
            i++;
        }
        else{
            cout<<b[j++]<<" ";
            i++;
        }
    }
    while(i<m){
        cout<<a[i++]<<" ";
    }
    while(j<n){
        cout<<b[j++]<<" ";
    }
    return 0;
}








