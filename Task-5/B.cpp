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
    cin >> n;

    ll result = 1;
    ll mod = 1e9 + 7;

    for (int i = 0; i < n; i++)
        result = (result << 1LL) % mod;

    cout << result << endl;
}