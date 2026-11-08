#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> n;
        srand(n + rand() % m);
    }
    for (int i = 0; i < n; i++)
    {
        cout << rand() % 11451 % n << " ";
    }

    return 0;
}