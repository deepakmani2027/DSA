#include<iostream>
using namespace std;
void occurance(int arr[100], int size, int target, int result[2]){
    int start=0, end=size-1, first=-1, last=-1, mid;

    // first occurance 
    while(start<=end){
        mid = ( start + (end - start)/2 );
        if(arr[mid] == target){
            first = mid;
            end = mid -1;
        }
        else if(arr[mid] <target){                 ////  right check
            start= mid + 1;
        }
        else if(arr[mid] > target){               ////  left check
            end = mid -1;
        }
    }



    // last occurance
    start=0, end=size-1; 
    while(start<=end){
        mid = ( start + (end - start)/2 );
        if(arr[mid] == target){
            last = mid;
            start = mid +1;
        }
        else if(arr[mid] <target){                 ////  right check
            start= mid + 1;
        }
        else if(arr[mid] > target){               ////  left check
            end = mid -1;
        }
    }

    result[0]=first;
    result[1]=last;

}

int main(){
    int n,a[100],target;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter target:";
    cin>>target;
    int result[2];
    occurance(a, n, target, result);
    cout << "no of occurance : " << (result[1]-result[0] +1)<< endl;
    return 0;
}