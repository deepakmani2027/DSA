///////////  BRUTE FORCE METHOD    ///////////////////


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter element of array:"<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter maximum difference between 2 element : ";
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans=max(ans,arr[j]-arr[i]);
        }
    }
    cout<<ans;

}




//////////////       SUFFIX MAX METHOD         /////////////////


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    cout<<"enter element of array:"<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter maximum difference between 2 element : ";
    int suffix=arr[0];
    int ans=INT_MIN;
    for(int i=n-1;i>=0;i--){
        suffix=max(suffix,arr[i]);
        ans=max(ans,suffix-arr[i]);
    }
    cout<<ans;
}