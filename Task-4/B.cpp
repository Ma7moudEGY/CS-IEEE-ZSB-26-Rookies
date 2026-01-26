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
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int alice = 0 , bob = 0;
    int left_sum = 0, right_sum = 0, left = 0, right = n - 1;
    while (left <= right) {
        if (left_sum <= right_sum) {
            left_sum += arr[left];
            left++;
            alice++;
        }

        else {
            right_sum += arr[right];
            right--;
            bob++;
        }
    }

    cout << alice << " " << bob << endl;
}