#include<iostream>
using namespace std;
int main(){
    int a[100][100],b[100][100],m1,n1,m2,n2;
    cout<<"enter rows and cols of matrix 1:";
    cin>>m1>>n1;
    cout<<"enter rows and cols of matrix 2:";
    cin>>m2>>n2;
    if(m1==m2 && n1==n2){
        cout<<"enter array elements of matrix 1:";
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                cin>>a[i][j];
            }
        }
        cout<<"enter array elements of matrix 2:";
        for(int i=0;i<m2;i++){
            for(int j=0;j<n2;j++){
                cin>>b[i][j];
            }
        }
        
        cout<<"Addition of 2 matrix:"<<endl;
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                cout<<a[i][j]+b[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<" addition not possible";
    }
    
}
