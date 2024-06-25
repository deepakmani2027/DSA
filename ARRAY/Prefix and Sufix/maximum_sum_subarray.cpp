/////////////////////   KADANE'S ALGORITHM ///////////////////////


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"maximum sum of subarray:";
    int maxi=INT_MIN;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix += arr[i];
        maxi = max(maxi,prefix);
        if(prefix < 0){
            prefix =0;
        }
    }
    cout<<maxi;
}