#include <iostream>
#include <utility>  // for std::pair

using namespace std;

pair<int, int> occurance(int arr[100], int size, int target) {
    int start = 0, end = size - 1, first = -1, last = -1, mid;
    
    // First occurrence 
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            first = mid;
            end = mid - 1;
        } else if (arr[mid] < target) {  // right check
            start = mid + 1;
        } else if (arr[mid] > target) {  // left check
            end = mid - 1;
        }
    }

    start = 0, end = size - 1;
    
    // Last occurrence 
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            last = mid;
            start = mid + 1;
        } else if (arr[mid] < target) {  // right check
            start = mid + 1;
        } else if (arr[mid] > target) {  // left check
            end = mid - 1;
        }
    }
    
    return make_pair(first, last);
}

int main() {
    int n, a[100], target;
    cout << "Enter size: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter target: ";
    cin >> target;
    
    pair<int, int> result = occurance(a, n, target);
    cout << "First occurrence: " << result.first << ", Last occurrence: " << result.second << endl;
    
    return 0;
}
