#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in" , "r" , stdin);
    freopen("string.out" , "w" , stdout);
    int n;
    long long  m;
    char e , d;
    for(int i = 1; i <= n; i++)
    {
        cin >> m;
        cin >> e;
        cin >> d;
    }
    for(int i = 1; i <= n; i++)
    {
        if(e == d)
        {
            cout << 0;
        }
    }
}
