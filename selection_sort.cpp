//////   INCRESING ORDER


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
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                swap(a[i],a[j]);
            }
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}




//////   DECREASING ORDER



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int a[100];
//     cout<<"enter size";
//     cin>>n;
//     cout<<"enter array element:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[j]>a[i]){
//                 swap(a[i],a[j]);
//             }
//         }
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
    
// }




///  CHAARACTER ASCENDING ORDER

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char a[100];
//     cout<<"enter size";
//     cin>>n;
//     cout<<"enter array element:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[i]){
//                 swap(a[i],a[j]);
//             }
//         }
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
    
// }