#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,prod=1;
    cout<<"enter n:";
    cin>>n;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        prod*=r;
        n=n/10;
    }
    cout<<"sum is:"<<sum<<endl;
    cout<<"product is:"<<prod<<endl;
    int diff=prod-sum;
    cout<<"diff is:"<<diff<<endl;
}
