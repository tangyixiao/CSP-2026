#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt,a[100005];
char c[100005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	bool flag=true;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(i>1 && c[i]!=c[i-1]) flag=false;
	}
	if(flag)
	{
		cout<<0;
		return 0;
	}
	int u=1,v=n;
	while(u<v)
	{
		if(c[u]==c[v])
		{
			if(a[u]>a[v]) a[u]-=a[v],v--;
			else if(a[u]==a[v]) v--,u++;
			else a[v]-=a[u],u++;
			continue;
		}
		if(a[u]>a[v]) cnt+=a[v],a[u]-=a[v],v--;
		else if(a[u]==a[v]) cnt+=a[v],v--,u++;
		else cnt+=a[u],a[v]-=a[u],u++;
	}
	cout<<cnt;
	return 0;
}
