#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long a[300000],sum[300000],maxx;

int main()
{
	ios::sync_with_stdio(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    
    ll n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
    	cin >> a[i];
    	if (maxx < a[i])
    	{
    		maxx = a[i];
		}
	}
	cout << maxx;
	return 0;
}

