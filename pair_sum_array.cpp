// #include<iostream>
// using namespace std;
// int main(){
//     int n,arr[100];
//     int sum,count=0;
//     cout<<"enter size:";
//     cin>>n;
//     cout<<"enter element of array:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter sum:";
//     cin>>sum;
//     cout<<"find pair of pair:"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if((arr[i]+arr[j])==sum){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
// }





////////////   ANOTHER METHOD



#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    int sum;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter sum: ";
    cin >> sum;

    cout << "Pairs with sum :" << endl;

    int start = 0,end=n-1;
    while (start < end) {
        if (arr[start] + arr[end] == sum) {
            cout << arr[start] << " " << arr[end] << endl;
            start++;
            end--;
        } else if (arr[start] + arr[end] < sum) {
            start++;
        } else {
            end--;
        }
    }

    return 0;
}


