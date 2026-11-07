#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
struct node{
	int x;
	char ss;
}a[N];
int n,cnt,ans;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].ss;
	}
	int l=1,r=n;
	while(l<r)
	{
		int k=a[l].x,h=a[r].x;
		if(a[l].ss==a[r].ss)
		{
			if(k>h)
			{
				r--;
				a[l].x-=h;
				k-=h;
			}
			else if(k<h)
			{
				l++;
				a[r].x-=k;
				h-=k;
			}
			else
			{
				l++;
				r--;
			}
		}
		else
		{
			if(k>h)
			{
				r--;
				a[l].x-=h;
				k-=h;
				ans+=h;
			}
			else if(k<h)
			{
				l++;
				a[r].x-=k;
				h-=k;
				ans+=k;
			}
			else
			{
				l++;
				r--;
				ans+=k;
			}
		}
	}
	cout<<ans;
	return 0;
}