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
    cout<<"reverse rows:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}







//////////////////////////  ANOTHER METHOD   //////////////////////////


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
    for(int i=0;i<m;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    cout<<"reverse rows:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

