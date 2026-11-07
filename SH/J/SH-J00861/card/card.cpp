#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N],b[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]!=a[i-1])
		{
			b[a[i]]=i;
		}
	}
	int cnt=0;
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
