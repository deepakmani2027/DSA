#include<iostream>
using namespace std;
bool isEven(int a){
    if(a%2 ==0){
        return 1;         //EVEN == 1
    }                    //ODD  == 0
    else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"enter a no:";
    cin>>num;
    if(isEven(num)){
        cout<<"no is even"<<endl;
    }
    else{
        cout<<"no is odd"<<endl;
    }
}