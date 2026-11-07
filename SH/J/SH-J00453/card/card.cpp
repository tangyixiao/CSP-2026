#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],b[300001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{cin>>a[i];}
	b[1]=1;
	int l=1,r=2;
	bool flag=0;
	while(r<=n)
	{
		if(flag==1&&l!=r)
		{
			b[a[l]]--;
			l++;
		}
		else if(l==r&&flag==1)
		{
			r++;
			flag=0;
		}
		else if(a[l]!=a[r])
		{
			b[a[r]]+=r;
			r++;
		}
		else if(a[l]==a[r])
		{
			b[a[r]]+=r;
			b[a[l]]--;
			l++;
			flag=1;
		}
	}
	for(int i=1;i<=m;i++)
	{cout<<b[i]<<' ';}
	return 0;
}
