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

    int n, q;
    cin >> n >> q;

    vll xor_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ll num;
        cin >> num;
        xor_sum[i] = num ^ xor_sum[i - 1];
    }

    int a, b;
    while (q--) {
        cin >> a >> b;
        cout << (xor_sum[b] ^ xor_sum[a - 1]) << endl;
    }
}