#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> missingAndRepeating(vector<int>arr){
    int n=arr.size();
    vector<int>count(n,0);
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }

    vector<int>ans(2);
    //missing
    for(int i=0;i<n;i++){
        if(count[i]==0){
            ans[0]=i+1;
        }
    }

    //repeat
    for(int i=0;i<n;i++){
        if(count[i]==2){
            ans[1]=i+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int> result = missingAndRepeating(arr);
    cout<<"missing no:"<<result[0]<<endl;
    cout<<"repeating no:"<<result[1]<<endl;
}




///////////////////////    LESSER SPACE COMPLEXITY    ////////////////

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> missingAndRepeating(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    vector<int>ans(2);

    //missing
    for(int i=0;i<n;i++){
        if(arr[i]/n==0){
            ans[0]=i+1;
        }
    }
    
    //repeat
    for(int i=0;i<n;i++){
        if(arr[i]/n==2){
            ans[1]=i+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int> result = missingAndRepeating(arr);
    cout<<"missing no:"<<result[0]<<endl;
    cout<<"repeating no:"<<result[1]<<endl;
}