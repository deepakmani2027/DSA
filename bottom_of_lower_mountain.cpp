#include <iostream>
using namespace std;
int bottomMountain(int arr[100], int size)
{
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = (end + (start - end) / 2);
        if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[100], n, mid;
    cout << "enter size:";
    cin >> n;
    cout << "enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "index is:" << bottomMountain(arr, n);
}