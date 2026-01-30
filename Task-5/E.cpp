#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define vll vector< ll >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

void solve() {
    ll a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0 << endl;
        return;
    }

    auto get_msb_val = [](ll n) -> ll {
        if (n == 0) return 0;
        return 1LL << (63 - __builtin_clzll(n));
    };

    ll ma = get_msb_val(a);
    ll mb = get_msb_val(b);

    if (mb > ma) {
        cout << -1 << endl;
        return;
    }

    ll mask = ma * 2 - 1;
    ll comp = a ^ mask;
    ll x2 = b ^ mask;

    cout << 2 << endl;
    cout << comp << " " << x2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();
}