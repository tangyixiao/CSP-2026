#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int n,m1,m2;
    cin >> n >> m1 >> m2;
    if (m1 < 10)
    {
        cout << n - n / 2;
    }
    else
    {
        cout << n/2 * m1;
    }
    return 0;
}
