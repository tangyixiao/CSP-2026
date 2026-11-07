#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    cin >> n;
    int x, x1;
    string s, s1;
    while(n--)
    {
        cin >> x >> s >> x1 >> s1;
        if(s == s1)
        {
            cout << 0;
            return 0;
        }
    }
    cout << x;
    return 0;
}