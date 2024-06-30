#include<iostream>
using namespace std;
void sort012(int arr[100],int size){
    int start=0,end=size-1;
    int mid=0;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid]==1){                    
            mid++;
        }
        else{                  ///  arr[mid]==2
            swap(arr[mid],arr[end]);
            end--;
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
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}