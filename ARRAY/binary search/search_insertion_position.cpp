#include<iostream>
using namespace std;
void insertionPosition(int arr[100], int size, int target){
    int start=0, end= size-1, mid, index=size;
    while(start<=end){
        mid=(start + (end-start)/2 );
        if(arr[mid] == target){
            index = mid;
            break;
        }
        else if(arr[mid] > target){
            index = mid;
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    } 
    cout<<"insertion index is: "<<index;
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
    insertionPosition(a, n, target);
    return 0;
}