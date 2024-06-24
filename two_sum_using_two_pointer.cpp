#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>a;
    int n,sum;
    cout<<"enter size:";
    cin>>n;
    a.resize(n);
    cout<<"enter element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter sum to find pair:";
    cin>>sum;
    sort(a.begin(), a.end());
    int start=0,end=n-1;
    vector<vector<int>> ans;
    while(start<end){
        if(a[start]+a[end] == sum){
            ans.push_back({a[start],a[end]});
            start++;
            end--;
        }
        else if(a[start]+a[end] > sum){
            end--;
        }
        else{
            start++;
        }
        
    }
    if (ans.empty()) {
        cout << "No such pair found." << endl;
    } 
    else {
        cout << "Pairs found:" << endl;
        for (const auto& pair : ans) {
            cout << pair[0] << " " << pair[1] << endl;
        }
    }
    
    return 0;
    
}