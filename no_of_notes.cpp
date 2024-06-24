#include<iostream>
using namespace std;
int main(){
    int note100,note50,note20,note1,amount;
    note100=note50=note20=note1=0;
    cout<<"enter ammount:";
    cin>>amount;
    if(amount>=100){
        note100=amount/100;    
        amount%=100;
    }
    if(amount>=50){
        note50=amount/50; 
        amount%=50;
    }
    if(amount>=20){
        note20=amount/20;  
        amount%=20;
    }
    if(amount>=1){
        note1=amount/1;
        amount%=1;
    }
    cout<<"no of 100 notes"<<note100<<endl;
    cout<<"no of 50 notes"<<note50<<endl;
    cout<<"no of 20 notes"<<note20<<endl;
    cout<<"no of 1 notes"<<note1<<endl;
    
    

}










