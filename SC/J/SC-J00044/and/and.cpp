#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,a[100005];
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int x=1,mx=0,mi=0;
    while(x<n)
    {
        for(int i=x+1;i<=n;i++)
        {
            if(a[x] and a[i]>a[x-1] and a[i-1])
            {
                mx=x;
                mi=i;
            }

        }
        x++;
    }
    cout << a[mx] and a[mi];


    return 0;
}