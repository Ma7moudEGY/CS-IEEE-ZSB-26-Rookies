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

    int n, q, a, b;
    cin >> n >> q;

    vector<ll> s (n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        s[i] = s[i - 1] + num;
    }

    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        ll sum =  s[b] - s[a - 1];
        cout << sum << endl;
    }
}