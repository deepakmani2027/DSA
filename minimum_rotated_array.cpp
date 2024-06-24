#include<iostream>
using namespace std;
int minimumRotatedArray(int arr[100],int size){
    int start=0,end=size-1,ans=arr[0],mid;
    while(start<=end){
        mid=start+(end-start)/2;
        //left sorted       move to right
        if(arr[0]<=arr[mid]){                  
            start=mid+1;          
        }
        //right sorted       move to left
        else{
            ans=arr[mid];
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int a[100],n;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"minimum element is:"<<minimumRotatedArray(a,n);
}