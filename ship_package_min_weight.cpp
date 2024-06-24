/////  max ( min ) 

#include<iostream>
using namespace std;
int minWeight(int wgt[100],int size,int k){
    int start=0,end=0,mid,ans;
    for(int i=0;i<size;i++){
        start=max(start,wgt[i]);
        end+=wgt[i];
    }
    while(start<=end){
        mid=start+(end-start)/2;
        int weight=0,count=1;
        for(int i=0;i<size;i++){
            weight+=wgt[i];
            if(weight > mid){
                count++;
                weight=wgt[i];
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
    cout<<"enter no of days to ship package:";
    cin>>k;
    cout<<"minimum weight to ship all package:"<<minWeight(a,n,k);
}