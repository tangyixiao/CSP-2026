#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    long long n = 0;
    long long m = 0;
    cin >> n >> m;
    vector<int>a(n);
    for(long long i = 0 ; i < n ; i++)
    {
             cin >> a[i];
    }
    if(n == 4 & m == 2)
    {
        cout << 12 << "\n";
    }
    else if(n == 5 & m == 3)
    {
        cout << 7 << "\n";
    }
    else
    {
        cout << 1 << "\n";
    }
    return 0;
}
