#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,m,a[N],ans,mx=-1;

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdin);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1)
		cout<<mx;
	else
	{
		mx=-1;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
				mx=max(mx,a[i]&a[j]);
		}
		cout<<mx;
	}
	return 0;
} 
/*4 2
3 15 12 12*/