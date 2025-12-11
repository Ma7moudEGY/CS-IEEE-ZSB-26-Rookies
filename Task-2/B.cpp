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
    int m, n, q;
    cin >> m;

    for (int u = 0; u < m; u++) {
        cin >> n >> q;
        vll s(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            int num; cin >> num;
            s[i] = s[i - 1] + num;
        }
        for (int i = 0; i < q; i++) {
            int l, r, k;
            cin >> l >> r >> k;

            ll originalS = s[n];
            ll newMidS = (r - l + 1) * k;
            ll oldMidS = s[r] - s[l - 1];

            if ((originalS + newMidS - oldMidS) % 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}