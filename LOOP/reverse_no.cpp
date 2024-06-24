#include<iostream>
using namespace std;
int main(){
    int n,r,s=0;
    cout<<"enter n:";
    cin>>n;
    while(n!=0){
        r=n%10;
        if( (s<INT_MIN/10) || (s>INT_MAX/10) ){        ////  FOR TOP COMPANY
            return 0;
        }
        s=s*10+r;
        n=n/10;
    }
    cout<<s;
}

