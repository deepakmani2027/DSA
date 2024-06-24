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
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            cout<<b[j++]<<" ";
            i++;
        }
    }
    return 0;
}








