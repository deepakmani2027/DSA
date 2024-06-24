#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,s=0;
    cout<<"enter n:";
    cin>>n;
    for(int i=0;n!=0;i++){
        int bit= n & 1;
        s=s+(bit * pow(10,i));
        n = n >> 1;
    }
    cout<<s<<endl;
}