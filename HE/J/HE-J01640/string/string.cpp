#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
using intt = long long;
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    long long n;
    cin >> n;
    if(n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    string s;
    for(int i = 0; i < n; i++)
    {
        long long x;
        char x1;
        cin >> x >> x1;
        while(x--) s += x1;
    }

    intt res = 0;
    intt ss = s.size();
    intt i, j;

    if(ss % 2 == 0)
    {
        i = ss / 2;
        j = ss / 2 + 1;
    }
    else if(ss % 2 != 0)
    {
        i = n / 2;
        j = n / 2 + 2;
    }

    while(i >= 0 && j < ss)
    {
        if(s[i] != s[j])
        {
            s[i] = s[j];
            res++;
        }
        i--;
        j++;

    }
    cout << res << endl;
    return 0;
}
