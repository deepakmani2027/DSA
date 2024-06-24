#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a;
    int n, diff;

    cout << "enter size:";
    cin >> n;
    a.resize(n);

    cout << "enter element:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter difference to find pair:";
    cin >> diff;

    sort(a.begin(), a.end());

    int start = 0, end = 1;
    vector<vector<int>> ans;
    while (end < n)
    {
        if (a[end] - a[start] == diff)
        {
            ans.push_back({a[start], a[end]});
            start++;
            end--;
        }
        else if (a[end] - a[start] < diff)
        {
            end++;
        }
        else
        {
            start++;
        }
    }

    if (ans.empty())
    {
        cout << "No such pair found." << endl;
    }
    else
    {
        cout << "Pairs found:" << endl;
        for (const auto &pair : ans)
        {
            cout << pair[0] << " " << pair[1] << endl;
        }
    }

    return 0;
}