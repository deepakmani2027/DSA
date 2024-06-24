#include<iostream>
using namespace std;
void squareRoot(int x){
    int start=0, end= x, mid , ans;
    while(start<=end){
        mid=(start + (end-start)/2 );
        if(mid*mid == x){
            ans=mid;
            break;
        }
        else if(mid*mid < x){
            ans=mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    } 
    cout<<"root is: "<<ans;
}
int main(){
    int x;
    cout<<"enter no:";
    cin>>x;
    squareRoot(x);
    return 0;
}