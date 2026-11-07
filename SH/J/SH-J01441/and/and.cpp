#include<bits/stdc++.h>
using namespace std;

int n,m,a[200005],maxn,maxn2,minn = 2e9,mi,ans;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
	    cin >> a[i];
	    if(a[i]>maxn)
	    {
	    	maxn2 = maxn;
	    	maxn = a[i];
		}
		else if(a[i]>maxn2)
		    maxn2 = a[i];
		if(a[i]<minn)
		{
			minn = a[i];
			mi = i;
		}
    }
	if(m == n)
	{
		bool ist = 0;
		for(int i = 1; i <= n; i++)
		{
			if(ist == 0)
		    {
		        ans = a[i];
		        ist = 1;
			}
			else ans = ans & a[i];
		}
	}
	if(m == n-1)
	{
		bool ist = 0;
		for(int i = 1; i <= n; i++)
		    if(i != mi)
		    {
		        if(ist == 0)
		        {
		        	ans = a[i];
		        	ist = 1;
				}
				else ans = ans & a[i];
		    }
	}
	if(m == 2)
		ans = maxn & maxn2;
	if(m == 1)
		ans = maxn;
	cout << ans;
	return 0;
}
