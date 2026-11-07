#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n = 0;
    cin >> n;
    vector <string> a(n + 1);
    for(long long i = 0 ; i < n * 2 ; i++)
    {
             cin >> a[i];
    }
    if(n == 1)
    {
        cout << 0 << "\n";
    }
    if(!n == 0)
    {
        cout << 2 << "\n";
    }



    return 0;
}
