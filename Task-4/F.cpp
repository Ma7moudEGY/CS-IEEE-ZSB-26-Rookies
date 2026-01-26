#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define vll vector< ll >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    cin >> n >> x;
    
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(all(arr));
    
    int left = 0, right = n - 1;
    while (left < right) {
        ll sum = (ll) arr[left].first + arr[right].first;

        if (sum == x) {
            cout << arr[left].second << " " << arr[right].second << endl;
            return 0;
        }

        else if (sum < x)
            left++;

        else
            right--;
    }

    cout << "IMPOSSIBLE" << endl;
}