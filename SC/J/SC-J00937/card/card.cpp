#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    int a[100010];
    cin >>n >> m;
    cin >> a[100010];
    for(int i =0; i <= n;i++)
    {
        int a[i];
        cin >>a[i];
      cout << sort(a[i]);
    }
    return 0;
}