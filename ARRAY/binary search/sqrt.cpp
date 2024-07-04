#include<iostream>
using namespace std;
long long int squareRoot(long long int x){
    long long int start=0, end= x, mid , ans=0;
    while(start<=end){
        mid=(start + (end-start)/2 );
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid < x){
            ans=mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    } 
    return ans;
}
int main(){
    int x;
    cout<<"enter no:";
    cin>>x;
    cout<<squareRoot(x);
    return 0;
}
