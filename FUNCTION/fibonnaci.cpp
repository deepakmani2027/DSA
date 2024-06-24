#include<iostream>
using namespace std;
void fibonacci(int n){
    int t1=0,t2=1,next_term;
    cout<<t1<<" "<<t2<<" ";
    for(int i=3;i<=n;i++){
        next_term=t1+t2;
        cout<<next_term<<" ";
        t1=t2;
        t2=next_term;
    }

}
int main(){
    int n;
    cout<<"enter no of term:";
    cin>>n;
    fibonacci(n);
}