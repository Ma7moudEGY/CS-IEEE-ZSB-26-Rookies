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
    ll t;
    cin >> n >> t;
    
    ll k[n];
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    sort(k, k + n);

    ll start = 1LL, end = 1LL * k[0] * t;
    ll ans = end;
    while (start <= end) {
        ll mid = start + (end - start) / 2;
        ll products = 0;

        for (ll time : k) {
            products += mid / time;
            if (products >= t) {
                break;
            }

        }
            if (products >= t) {
                ans = mid;
                end = mid - 1;
            }

            else {
                start = mid + 1;
            }
    }

    cout << ans << endl;
}