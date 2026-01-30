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
    
    int arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    ll min_diff = sum;

    for (int i = 0; i < (1 << n); i++) {
        ll current = 0;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1)
                current += arr[j];
        }

        ll sum2 = sum - current;
        ll diff = abs(current - sum2);

        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;
}