#include<iostream>
using namespace std;
int main(){
    int arr[100][100],m,n;
    int sum=INT_MIN,index=-1;
    cout<<"enter rows:";
    cin>>m;
    cout<<"enter cols:";
    cin>>n;
    cout<<"enter array elements:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"print 2d array:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        int total=0;
        for(int j=0;j<n;j++){
            total+=arr[i][j];
            if(sum < total){
                sum=total;
                index=i;
            }
        }
    }
    cout<<"index of maximum sum :"<<index;
}
