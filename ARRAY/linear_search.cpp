#include<iostream>
using namespace std;
bool search(int arr[100], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 0;
}
int main(){
    int n,key,a[100];
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter key to search:";
    cin>>key;
    int found=search(a,n,key);
    if(found){
        cout<<"key is found in index:"<<found;
    }
    else{
        cout<<"key is not found";
    }
}