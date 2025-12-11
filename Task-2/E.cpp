#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define vll vector< ll >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vll A(n + 1); 
    vll PG(n + 2, 0); 
    vll SG(n + 2, 0); 
    
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        PG[i] = gcd(PG[i - 1], A[i]);
    }

    for (int i = n; i >= 1; i--) {
        SG[i] = gcd(A[i], SG[i + 1]);
    }

    ll maxGCD = 0;

    for (int k = 1; k <= n; k++) {
        ll current_gcd = gcd(PG[k - 1], SG[k + 1]);
        maxGCD = max(maxGCD, current_gcd);
    }

    cout << maxGCD << endl;

    return 0;
}