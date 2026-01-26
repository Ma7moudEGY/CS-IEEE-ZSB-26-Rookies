#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define vll vector< ll >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        counts[arr[i]]++;
    }

    map<int, int> quota;
    for (auto const& [val, c] : counts) {
        if (c % k != 0) {
            cout << 0 << endl;
            return;
        }
        quota[val] = c / k;
    }

    ll awsome = 0;
    map<int, int> window;
    int left = 0;
    for (int right = 0; right < n; right++) {
        int current = arr[right];
        window[current]++;

        while (window[current] > quota[current]) {
            window[arr[left]]--;
            left++;
        }

        awsome += right - left + 1;
    }

    cout << awsome << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--) {
        solve();
    }
}