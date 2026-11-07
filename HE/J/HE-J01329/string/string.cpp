#include <bits/stdc++.h>
using namespace std;
long long a[200005],ans;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	long long l=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	if(n==2)
	{
		cout<<(a[2]-a[1])/2;
		return 0;
	}
	long long lt=1,rt=l;
	long long ta=1,tb=n;
	while(rt-lt>=2)
	{
		if(a[ta]<=0) ta++;
		if(a[tb]<=0) tb--;
		long long tt=min(a[ta],a[tb]);
		if(c[ta]!=c[tb]) 
		{
			ans+=tt;
			a[ta]-=tt;
			a[tb]-=tt;
		}
		lt+=tt;
		rt-=tt;
	}
	cout<<ans;
	return 0;
}
