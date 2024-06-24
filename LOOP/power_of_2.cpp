#include<iostream>
using namespace std;
int ispoweroftwo(int n){
    if(n<=0)   return false;
    if(n==1)    return true;
    else   return n%2==0  && ispoweroftwo(n/2);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    if(ispoweroftwo(n))
        cout<<"true";
    else
        cout<<"false";
}






////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// #include<iostream> 
// using namespace std;
// int ispoweroftwo(int n){
//     if(n<=0)   return false;
//     else   return ( n & (n-1))==0 ;
// }
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     if(ispoweroftwo(n))
//         cout<<"true";
//     else
//         cout<<"false";
// }