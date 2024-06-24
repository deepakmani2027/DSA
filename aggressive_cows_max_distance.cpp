// //  MIN ( MAX )

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> stalls;
    int k,n;
    cout<<"enter size:";
    cin>>n;
    stalls.resize(n);
    cout<<"enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }
    cout<<"enter no of cows:";
    cin>>k;
    int start=1,end,mid,ans;
    sort(stalls.begin(),stalls.end());
    end=stalls[n-1]-stalls[0];
    while(start<=end){
        mid=start+(end-start)/2;
        int count=1,pos=stalls[0];
        for(int i=0;i<n;i++){
            if(pos+mid <= stalls[i]){
                count++;
                pos=stalls[i];
            }
        }
        if(count < k){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
    }
    cout<<"max distance between two cows:"<<ans;
}