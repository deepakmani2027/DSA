#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter array element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int sum1=0,sum2=0;
        for(int j=0;j<=i;j++){
            sum1+=arr[j];
        }
        for(int k=i+1;k<n;k++){
            sum2+=arr[k];
        }
        if(sum1 == sum2){
            cout<<"subarray_1:"<<endl;
            for(int j=0;j<=i;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
            cout<<"subarray_2:"<<endl;
            for(int k=i+1;k<n;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    
}




///////////////////////////////   ANOTHER METHOD   ////////////////////////////////////////////

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int divideArray(vector<int>arr){
//     int n=arr.size(), total_sum=0 , prefixsum=0 ;

//     for(int i=0;i<n;i++){
//         total_sum+=arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         prefixsum+=arr[i];
//         int ans=total_sum-prefixsum;
//         if(ans == prefixsum){
//             return 1;
//         }
//     }
//     return 0;

// }
// int main(){
//     int n;
//     cout<<"enter size:";
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"enter array element:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<divideArray(arr); 
// }