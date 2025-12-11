#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define vll vector< ll >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

int main()
{
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int n, q, breed;
    cin >> n >> q;

    vi p1(n + 1, 0);
    vi p2(n + 1, 0);
    vi p3(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> breed;

        p1[i] = p1[i - 1];
        p2[i] = p2[i - 1];
        p3[i] = p3[i - 1];

        if (breed == 1) {
            p1[i]++;
        } else if (breed == 2) {
            p2[i]++;
        } else if (breed == 3) {
            p3[i]++;
        }
    }

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;

        int count1 = p1[b] - p1[a - 1];
        int count2 = p2[b] - p2[a - 1];
        int count3 = p3[b] - p3[a - 1];

        cout << count1 << " " << count2 << " " << count3 << endl;
    }
}