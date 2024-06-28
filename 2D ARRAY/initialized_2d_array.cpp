#include<iostream>
using namespace std;
int main(){
    int arr[100][100],m,n;
    int x;
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
    cout<<"enter x to find:";
    cin>>x;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == x){
                cout<<i+1<<" "<<j+1;
            }
        }
    }
}
