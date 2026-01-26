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
    ll t;
    cin >> n >> t;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int read = 0, left = 0, sum = 0;
    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > t) {
            sum -= arr[left];
            left++;
        }

        read = max(read, right - left + 1);
    }
    

    cout << read << endl;
}