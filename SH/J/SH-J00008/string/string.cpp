#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int n, l;
char c;
string s;

int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> l >> c;
        for(int j = 1; j <= l; j++) s += c;
    }

    n = s.size();
    s = " " + s;
    long long ans = 0;
    for(int i = 1; i <= n / 2; i++)
        if(s[i] != s[n - i + 1])
            ans++;
    cout << ans;
    return 0;
}
