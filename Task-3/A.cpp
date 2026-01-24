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

    int v, k;
    cin >> v >> k;

    int start = 1, end = v, ans = INT_MAX;
    while (start <= end) {
        int mid = start + ((end - start) >> 1);
        int accu = 0, current = mid;

        while (current > 0) {
            accu += current;
            current /= k;
        }

        if (accu >= v) {
            ans = mid;
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }

    cout << ans << endl;
}