#include<iostream>
using namespace std;
int maximum(int arr[100], int size){
    int max=INT_MIN;
    for(int  i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minimum(int arr[], int size){
    int min=INT_MAX;
    for(int  i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n,arr[100];
    cout<<"enter size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"maximum element of array:"<<maximum(arr,n)<<endl;
    cout<<"minimum element of array:"<<minimum(arr,n)<<endl;
}