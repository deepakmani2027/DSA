#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"enter size:";
    cin>>n;
    cout<<"enter element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"find dublicate:";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[j]<<" ";
            }
        }
    }
}





// #include<iostream>
// using namespace std;
// int main(){
//     int n,arr[100];
//     cout<<"enter size:";
//     cin>>n;
//     cout<<"enter element of array:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"find dublicate:";
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(arr[i]==arr[j]){
//                     if(arr[j]==arr[k]){
//                         cout<<arr[k]<<" ";
//                     }
//                 }
//             }
            
//         }
//     }
// }