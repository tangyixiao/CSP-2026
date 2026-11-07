#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    long long l = 0, cnt = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        char c;
        cin >> a >> c;
        l += a;
        while (a--)
            s += c;
    }
    for (long long i = 0; i < (l >> 1); i++)
        if (s[i] != s[l - i - 1])
            cnt++;
    cout << cnt << endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}