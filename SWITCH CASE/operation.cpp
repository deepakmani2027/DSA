#include<iostream>
using namespace std;
int main(){
    float a,b;
    char ch;
    do{
        cout<<"enter a and b:";
        cin>>a>>b;
        cout<<"enter operator '+' , '-' , '*' , '/' :";
        cin>>ch;
        switch(ch){
                case '+': cout<<a+b<<endl;
                        break;
                case '-': cout<<a-b<<endl;
                        break;
                case '*': cout<<a*b<<endl;
                        break;
                case '/': cout<<a/b<<endl;
                        break;
                case '!': cout<<"exiting the program"<<endl;
                                break;
                default:    cout<<"enter opertor is not correct !!"<<endl;
        }
    }while(ch!='!');
    return 0;
      
}