/////  max ( min ) 

#include<iostream>
using namespace std;
int minTime(int length[100],int size,int k){
    int start=0,end=0,mid,ans;
    for(int i=0;i<size;i++){
        start=max(start,length[i]);
        end+=length[i];
    }
    while(start<=end){
        mid=start+(end-start)/2;
        int wall_length=0,count=1;
        for(int i=0;i<size;i++){
            wall_length+=length[i];
            if(wall_length > mid){
                count++;
                wall_length=length[i];
            }
        }
        // left check
        if(count <= k){
            ans=mid;
            end=mid-1;
        }
        // right check
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int a[100],n,k;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter no of person to paint all walls:";
    cin>>k;
    cout<<"minimum time to paint all wall:"<<minTime(a,n,k);
}