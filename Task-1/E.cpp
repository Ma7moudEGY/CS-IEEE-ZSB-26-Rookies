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

    int n, x;
    cin >> n >> x;

    vector<int> nums(n);
    map<int, int> toSum;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        int sol = x - nums[i];

        if (toSum.find(sol) != toSum.end()) {
            cout << i + 1 << " " << toSum[sol] + 1 << endl;
            return 0;
        }

        toSum[nums[i]] = i;
    }

    cout << "IMPOSSIBLE";
}