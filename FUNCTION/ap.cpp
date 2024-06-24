#include<iostream>
using namespace std;
int ap(int n){
    int ans=(3*n + 7);
    return ans;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int ans=ap(n);
    cout<<"nth term:"<<ans<<endl;
}