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

    ll arr[n];
    ll xor_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        xor_sum ^= arr[i];
    }

    for (int i = 0; i < n; i++)
        cout << (arr[i] ^ xor_sum) << ' ';
    cout << endl; 
}