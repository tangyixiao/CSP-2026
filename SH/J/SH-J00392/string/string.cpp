#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll ans;
ll g[200010];
char c[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>g[i]>>c[i];
	}
	int i=1,j=n;
	while(i<j)
	{
		if(c[i]==c[j])
		{
			if(g[i]>g[j])
			{
				g[i]-=g[j];
				j--;
			}
			else if(g[i]<g[j])
			{
				g[j]-=g[i];
				i++;
			}
			else
			{
				i++;
				j--;
			}
		}
		else
		{
			if(g[i]>g[j])
			{
				g[i]-=g[j];
				ans+=g[j];
				j--;
			}
			else if(g[i]<g[j])
			{
				g[j]-=g[i];
				ans+=g[i];
				i++;
			}
			else
			{
				ans+=g[i];
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}

