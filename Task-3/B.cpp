#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define vll vector< ll >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

int findLast(int value, int arr[], int size);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(x, x + n);

    int q, m;
    cin >> q;

    while (q--) {
        cin >> m;
        int index = findLast(m, x, n);
        cout << ++index << endl;
    }
}

int findLast(int value, int arr[], int size) {
    int start = 0; 
    int end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] <= value) {
            result = mid;
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }

    return result;   
}