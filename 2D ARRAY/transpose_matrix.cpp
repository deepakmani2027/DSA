#include<iostream>
using namespace std;
int main(){
    int arr[100][100],m,n,sum=0;
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
    cout<<"transpose matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
