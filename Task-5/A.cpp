#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define vll vector< ll >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin >> n;

    int arr[n];
    int xor_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        xor_sum ^= arr[i];
    }

    for (int i = 0; i < n; i++) {
        if ((xor_sum ^ arr[i]) == arr[i]) {
            cout << arr[i] << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while(q--)
        solve();
}