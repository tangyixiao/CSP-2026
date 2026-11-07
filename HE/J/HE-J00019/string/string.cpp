#include <iostream>
#include <string>
using namespace std;
long long n, a[500005], x, sum;
char b[500005];
string s;
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        for (int j = 1; j <= a[i]; j++)
            s += b[i];
    }
    if (s.size() % 2 == 0)
    {
        x = s.size() - 1;
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[x])
                sum++;
            x--;
        }
    }
    else
    {
        x = s.size() - 1;
        for (int i = 0; i < (s.size() - 1) / 2; i++)
        {
            if (s[i] != s[x])
                sum++;
            x--;
        }
    }
    cout << sum;
    return 0;
}
