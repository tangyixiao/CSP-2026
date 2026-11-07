#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],same,maxx_same=-1,maxx=-1;
bool f[100005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	memset(f,false,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(maxx<=a[i])
		{
			maxx=a[i];
		}
		if(f[a[i]]==true)
		{
			same=a[i];
			if(same>maxx_same)
			{
				maxx_same=same;
			}
		}
		f[a[i]]=true;
	}
	if(maxx_same!=-1)
	{
		cout<<maxx_same;
	}
	else
	{
		cout<<maxx;
	}
	return 0;
}