#include "bits/stdc++.h"

#define ll long long
#define vi vector< int >
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll sum = 1ll * n * (n + 1) / 2;

    if (sum % 2) {
        cout << "NO" << endl;
        return 0;
    }

    else {
        cout << "YES" << endl;
        stack<int> first, second;
        first.push(n);
        ll sum1 = n;

        sum /= 2;

        for (int i = n - 1; i >= 1; i--) {
            if (sum - sum1 >= i) {
                first.push(i);
                sum1 += i;
            }

            else {
                second.push(i);
            }
        }

    ostringstream res;

    res << first.size() << endl;
    while (!first.empty())
    {
        res << first.top() << " ";
        first.pop();
    }

    res << endl << second.size() << endl;
    while (!second.empty())
    {
        res << second.top() << " ";
        second.pop();
    }

    cout << res.str();
    }
}