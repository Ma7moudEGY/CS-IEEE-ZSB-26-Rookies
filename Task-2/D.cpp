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

    vll vS(n + 1, 0);
    vll uS(n + 1, 0);
    priority_queue<int, vector<int>, greater<int>> temp;  
    
    for (int i = 1; i <= n; i++) {
        int num; cin >> num;
        vS[i] = vS[i - 1] + num;
        temp.push(num);
    }

    for (int i = 1; i <= n; i++) {
        int num = temp.top();
        uS[i] = uS[i - 1] + num;
        temp.pop();
    }

    int q, type, l, r;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        cin >> type >> l >> r;

        if (type == 1) {
            cout << vS[r] - vS[l - 1] << endl;
        }
        else
            cout << uS[r] - uS[l - 1] << endl;
    }
}