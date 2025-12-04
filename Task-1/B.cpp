#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int longest = 0, count = 1;
    cin >> s;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) 
            count++;

        else {
            if (count >= longest) 
                longest = count;

            count = 1;
        }
    }

    cout << max(count, longest);
}