#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n, q;

    cin >> x >> n;
    vector<pair<int, bool>> w(n); 

    for (int i = 0; i < n; i++) {
        cin >> w[i].first;
        w[i].second = false;
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        int num; cin >> num;
        num--;

        if (w[num].second) {
            x -= w[num].first;
            w[num].second = false;
        }

        else {
            x += w[num].first;
            w[num].second = true;
        }
        cout << x << endl;
    }
}