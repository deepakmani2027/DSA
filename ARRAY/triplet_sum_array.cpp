#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    int sum,count=0;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter sum:";
    cin>>sum;
    cout<<"find triplet of pair:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((arr[i]+arr[j]+arr[k])==sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}