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
    ll x;
    cin >> n >> x;
    
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0, sub = 0;
    ll sum = 0;
    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > x && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum == x)
            sub++;
    }

    cout << sub << endl;
}