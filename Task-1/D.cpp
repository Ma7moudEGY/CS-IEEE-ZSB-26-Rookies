#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }

    cout << s.size();
}