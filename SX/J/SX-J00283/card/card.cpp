#include<bits/stdc++.h>
using namespace std;
int a[500005],b[300005],d[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 1; i<= n; i++)
	{
		cin>>a[i];
		b[a[i]]=max(b[a[i]],i);
	}
	for(int i = 1; i<= n; i++)
	{
		d[i]++;
		if(b[a[i]]!=i)
		{
			d[b[a[i]]]+=d[i];
		}
		else
		{
			d[i+1]+=d[i];
		}
	}
	for(int i = 1; i<= m; i++)
	{
		cout<<d[b[i]]<<" ";
	}
	return 0;
}