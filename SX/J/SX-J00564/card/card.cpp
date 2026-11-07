#include<bits/stdc++.h>
#define ll int
using namespace std;
ll n,m,a[500005],f1,id[500005];
int main() 
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i-1]!=a[i]) id[a[i-1]]=i-1;
		if(a[i-1]>a[i]) f1=1;
	}
	id[a[n]]=n;
	if(f1==0)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<id[i]<<" ";
		}
	}
	return 0;
}
