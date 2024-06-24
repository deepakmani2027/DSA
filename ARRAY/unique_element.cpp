//QUESTION : find single elements in array which is not repeat;



#include<iostream>
using namespace std;
int main(){
    int size,m,a[100];
    cout<<"enter n:";
    cin>>m;
    size=2*m+1;
    cout<<"size of array is:"<<size<<endl;
    cout<<"enter array elemets:"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^a[i];
    }
    cout<<"answer is:"<<ans;
}