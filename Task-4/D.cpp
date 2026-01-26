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
    for (int i = 0; i < n; i++)
        cin >> arr[i];

     int left = 0, right = n - 1;
     int left_sum = 0, right_sum = 0;
     int total_sum = 0;

     while (left <= right) {
        if (left_sum <= right_sum) {
            left_sum += arr[left];
            left++;
        }

        else {
            right_sum += arr[right];
            right--;
        }

        if (right_sum == left_sum)
            total_sum = left + n - 1 - right;
     }

     cout << total_sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while (q--) {
        solve();
    }
}