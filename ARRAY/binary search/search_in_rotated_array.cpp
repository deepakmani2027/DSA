#include<iostream>
using namespace std;
int search(int arr[100],int size,int target){
    int start=0,end=size-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        // left sorted
        else if(arr[0]<arr[mid]){
            if(arr[0]<=target && target<=arr[mid]){
                // left search
                index=mid;
                end=mid-1;
            }
            else{
                // right search
                start=mid+1;
            }
        }
        else{
            // right sorted
            if(arr[mid]<=target && target<=arr[size-1]){
                // right search
                index=mid;
                start=mid+1;
            }
            else{
                //left search
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int a[100],n,target;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter target to search:";
    cin>>target;
    cout<<"index of search target:"<<search(a,n,target);
}
