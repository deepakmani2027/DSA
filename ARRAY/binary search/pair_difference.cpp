#include<iostream>
#include<algorithm>
using namespace std;
void sorting(int arr[100],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
        
    }
}

int difference(int arr[100],int size,int diff){
    sort(arr,arr+size);
    //int ans=-1;
    for(int i=0;i<size;i++){
        int key=arr[i]+diff;
        int start=i+1;
        int end=size-1,mid;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==key){
                return arr[i] ;
            }
            else if(arr[mid]<key){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
    return -1;
}

int main(){
    int a[100],n,diff;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter diff:";
    cin>>diff;
    //sorting(a,n);
    int result=difference(a,n,diff);
    cout<<result<<" "<<result+diff<<endl;
}