//   INCREASING ORDER


#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    cout<<"enter size";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }   
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}





///   DECREASING ORDER



#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    cout<<"enter size";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-2;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(a[j]<a[j+1]){
                swap(a[j],a[j+1]);
                swapped++;
            }
        }
        if(swapped==0){
            break;
        }   
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}