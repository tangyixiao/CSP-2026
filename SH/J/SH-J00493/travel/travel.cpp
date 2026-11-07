#include<bits/stdc++.h>
using namespace std;

string a,b,c,d;
int c1,c2,l1,l2,s1,s2;

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> a >> b >> c >> d;
    for (int i = 0;i < 2;i++)
    {
        c1 *= 10;
        c1 += a[i] - '0';
        c2 *= 10;
        c2 += c[i] - '0';
    }
    for (int i = 0;i < 2;i++)
    {
        l1 *= 10;
        l1 += b[i] - '0';
        l2 *= 10;
        l2 += d[i] - '0';
    }
    s1 = b[2] - 'A';
    s2 = d[2] - 'A';
    if (c1 == c2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    if (c1 == c2 and l1 == l2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    if (c1 == c2 and l1 == l2 and ((s1 <= 3 and s2 <= 3) or (s1 >= 4 and s2 >= 4)))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    if (c1 == c2 and l1 == l2 and ((s1 <= 3 and s2 <= 3) or (s1 >= 4 and s2 >= 4)) and abs(s1-s2) == 1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
