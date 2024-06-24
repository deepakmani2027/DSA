#include<iostream>
using namespace std;
int setbits(int num){
    int ans=0;
    while(num){
        num=num&(num-1);
        ans++;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<setbits(a)+setbits(b)<<endl;
    return 0;
}