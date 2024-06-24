#include<iostream>
using namespace std;
int findMissingNo(int arr[100],int size,int k){
    int start=0,end=size-1,ans,mid;
    while(start<=end){
        // left check
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1 >= k){
            ans=mid;
            end=mid-1;
        }
        // right check
        else{
            start=mid+1;
        }
    }
    return ans+k;
}

int main(){
    int a[100],n,k;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter K:";
    cin>>k;
    cout<<"Kth missing no:"<<findMissingNo(a,n,k);
}