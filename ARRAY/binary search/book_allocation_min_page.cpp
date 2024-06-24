/////  max ( min ) 

#include<iostream>
using namespace std;
int bookPage(int page[100],int size,int k){
    int start=0,end=0,mid,ans;
    for(int i=0;i<size;i++){
        start=max(start,page[i]);
        end+=page[i];
    }
    while(start<=end){
        mid=start+(end-start)/2;
        int pages=0,count=1;
        for(int i=0;i<size;i++){
            pages+=page[i];
            if(pages > mid){
                count++;
                pages=page[i];
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
    cout<<"enter no of person to distribute pages:";
    cin>>k;
    cout<<"minimum no of pages per person:"<<bookPage(a,n,k);
}