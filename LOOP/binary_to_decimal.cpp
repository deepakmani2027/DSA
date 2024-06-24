#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n,s=0;
    cout<<"enter n:";
    cin>>n;
    for(int i=0;n!=0;i++){
        int digit= n % 10;
        if(digit==1){
            s=s + pow(2,i);
        }
        n= n / 10;
    }
    cout<<s<<endl;

    return 0;
}