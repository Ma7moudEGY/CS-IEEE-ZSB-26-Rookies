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

    int n, m;
    cin >> n >> m;
    
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    ll start = 0, end = 2e9;
    ll ans = end;

    while (start <= end) {
        ll mid = start + (end - start) / 2;

        int j = 0;
        bool yes = true;

        for (int i = 0; i < n; i++) {
            while (j < m && b[j] < a[i] - mid) {
                j++;
            }

            if (j == m || abs(b[j] - a[i]) > mid) {
                yes = false;
                break;
            }
        }

        if (yes) {
            ans = mid;
            end = mid - 1;
        }
        
        else {
            start = mid + 1;
        }
    }

    cout << ans << endl;
}