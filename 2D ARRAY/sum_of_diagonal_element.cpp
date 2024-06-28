#include<iostream>
using namespace std;
int main(){
    int arr[100][100],m,n,sum=0;
    cout<<"enter rows:";
    cin>>m;
    cout<<"enter cols:";
    cin>>n;
    if(m == n){
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
            sum+=arr[i][i];
        }
        cout<<"sum of diagonal is:"<<sum;
    }
    else{
        cout<<"diagonal not possible";
    }
}
