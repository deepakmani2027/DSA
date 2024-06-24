/////////   SEARCH KEY IN INCREASING ARRAY................



#include<iostream>
using namespace std;

int binarySearch(int arr[100],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,arr[100],key;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter key to search:";
    cin>>key;

    cout<<"index is:"<<binarySearch(arr,n,key)<<endl;
    
}




/////////   SEARCH KEY IN DECREASING ARRAY................



#include<iostream>
using namespace std;

int binarySearch(int arr[100],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            end=mid-1;
            //start=mid+1;
        }
        else{
            start=mid+1;
            //end=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,arr[100],key;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter key to search:";
    cin>>key;

    cout<<"index is:"<<binarySearch(arr,n,key)<<endl;
    
}