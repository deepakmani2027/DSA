#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    vector<int>count(n,0);
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
    for(int i=0;i<n;i++){
        cout<<count[i]<<" ";
    }
}


//////////////////////    LESSER SPACE COMPLEXITY    //////////////////////


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]/n;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}