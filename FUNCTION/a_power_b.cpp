#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    int c=power(a,b);
    cout<<"a power b is:"<<c<<endl;
}