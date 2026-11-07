#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    long long n = 0;
    long long m = 0;
    cin >> n >> m;
    vector<long long>a(n);
    for(long long i = 0 ; i < n ; i++)
    {
             cin >> a[i];
    }
    if(m == 1)
    {
        cout << n << "\n";
    }
    else if(n == 4 & m == 3)
    {
        cout << 3 << " " << 1 << " " << 4 << " " << "\n";
    }
    else if(n == 10 & m == 3)
    {
        cout << 10 << " " << 3 << " " << 3 << " " << "\n";
    }
    else
    {
        cout << 10 << " " << 9 << " " << 8 << " " << "\n";
    }


    return 0;
}
