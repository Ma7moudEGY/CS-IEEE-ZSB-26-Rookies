#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && nums[s.top()] >= nums[i]) {
            s.pop();
        }
        
        if (s.empty())
            cout << 0 << " ";
        else
            cout << s.top() + 1 << " ";
        s.push(i);
    }
    cout << endl;
    return 0;
}