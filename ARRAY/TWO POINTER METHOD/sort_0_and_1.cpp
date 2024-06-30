#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01(int arr[100],int size){
    int start=0,end=size-1;
    while(start<=end){
        if(arr[start]==0){
            start++;
        }
        else{                    // arr[start]==1
            if(arr[end]==0){
                swap(arr[start],arr[end]);
            }
            else{                // arr[end]==1
                end--;
            }
        }
    }
}

int main(){
    int arr[100],n;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort01(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}