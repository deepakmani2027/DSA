#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left=0,right=0;
    vector<int>leftmax;
    vector<int>rightmax;
    for(int i=0;i<n;i++){
        left=max(left,arr[i-1]);
        leftmax.push_back(left);
    }

    for(int i=n-1;i>=0;i--){
        right=max(right,arr[i+1]);
        rightmax.push_back(right);
    }
    reverse(rightmax.begin(),rightmax.end());

    vector<int>height;
    int min_height;
    for(int i=0;i<n;i++){
        min_height=min(leftmax[i],rightmax[i]);
        height.push_back(min_height);
    }
    
    vector<int>ans;
    int unit_water;
    for(int i=0;i<n;i++){
        unit_water=height[i] - arr[i];
        if(unit_water < 0){
            unit_water=0;
        }
        ans.push_back(unit_water);
    }

    int total_water=0;
    for(int i=0;i<n;i++){
        total_water+=ans[i];
    }
    cout<<"total water stored:"<<total_water;
}



///////////////////    CODE ARMY  //////////////////////

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<stdlib.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size:";
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"enter array element:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int>leftmax(n);
//     vector<int>rightmax(n);
//     leftmax[0]=0 , rightmax[n-1]=0;
//     for(int i=1;i<n;i++){
//         leftmax[i]=max(leftmax[i-1],arr[i-1]);
//     }
//     for(int i=n-2;i>=0;i--){
//         rightmax[i]=max(rightmax[i+1],arr[i+1]);
//     }
//     int water , min_height=0;
//     for(int i=0;i<n;i++){
//         min_height=min(leftmax[i],rightmax[i]);
//         if(min_height-arr[i] >=0){
//             water += min_height-arr[i];
//         }
//     }
//     cout<<"minimum water stored:"<<water;
// }