#include <bits/stdc++.h>
using namespace std;

int main ()
{
    freopen ("travel.in", "r", stdin);
    freopen ("travel.out", "w", stdout);
    int a, b;
    string x, y;
    cin >> a >> x >> b >> y;
    bool flag1 = (a == b), flag2 = flag1 & (x.substr (0, 2) == y.substr (0, 2)), flag3 = flag2 & ((x [2] <= 'C') == (y [2] <= 'C'));
    bool flag4 = flag3;
    if (x [2] <= 'B')
    {
        flag4 &= (abs (x [2] - y [2]) == 1);
    }
    else if (x [2] == 'C')
    {
        flag4 &= (y [2] == 'B');
    }
    else if (x [2] == 'D')
    {
        flag4 &= (y [2] == 'F');       
    }
    else
    {
        flag4 &= (y [2] == 'D');
    }
    printf ("%d%d%d%d\n", flag1, flag2, flag3, flag4);
    return 0;
}