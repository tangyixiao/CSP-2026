#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N],li[N],n,m,o,ans[N];
int answer()
{
	for(int i=1; i<=o; i++)
	{
		ans[li[i]]++;
	}
}
int search()
{
	for(int i=o-1; i>=1; i--)
	{
		if(li[i]==li[o])
		{
			return i;
		}
	}
	return 0;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(int i=1; i<=n; i++)
	{
		o=0;
		for(int j=i; j<=n; j++)
		{
			o++;
			li[o]=a[j];
			if(search())
			{
				o=search();
			}
		}
		answer();
	}
	for(int i=1; i<=m; i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}