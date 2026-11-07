#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int a[N],n;
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	
	int p=n,t=a[n],ans=0;
	for(int i=1;i<p;i++)
	{
		if(t>a[i])
		{
			if(c[i]!=c[p])
			{
				ans+=a[i];
			}
			t-=a[i];
		}
		else 
		{
			int cnt=a[i];
			while(i<p&&cnt)
			{
				if(t>cnt)
				{
					if(c[i]!=c[p])
					{
						ans+=cnt;
					}
					t-=cnt;
					cnt=0;
				}
				else
				{
					if(c[i]!=c[p])
					{
						ans+=t;
					}
					cnt-=t;
					p--;
					t=a[p];
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
