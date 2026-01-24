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

    int n, m, k;
    cin >> n >> m >> k;
    
    int h[n], b[m];

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(h, h + n);
    sort(b, b + m);

    bool possible = true;

    for (int i = 0; i < k; i++) {
        if (h[i] > b[m - k + i]) {
            possible = false;
            break;
        }
    }

    cout << (possible ? "Yes" : "No") << endl;
}