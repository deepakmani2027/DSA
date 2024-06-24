/////   INCREASIN ORDER


#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    cout<<"enter size";
    cin>>n;
    cout<<"enter array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
            // else{
            //     break;
            // }
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}



////   DECREASING ORDER


#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    cout<<"enter size";
    cin>>n;
    cout<<"enter array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(a[j]>a[j-1]){
                swap(a[j],a[j-1]);
            }
            else{
                break;
            }
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}