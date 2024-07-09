//////////   MAJORITY ELEMENT  

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>arr){
    int n=arr.size();
    int candidate,count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            candidate=arr[i];
        }
        else{
            if(candidate==arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
    }
    return candidate;
}

int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"majority element : "<<majorityElement(arr);
}