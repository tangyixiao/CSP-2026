#include <bits/stdc++.h>
using namespace std;
int n,m,ne[300010],r[500010];
long long sum[300010];
struct dot{
	int z,pt;
}a[500010];
void add(int x)
{
	while(x<=n)
	{
		sum[a[x].z]++;
		x=ne[a[x].z]+1;
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i].z;
	}
	for(int i = n;i>0;i--)
	{
		if(ne[a[i].z]==0)ne[a[i].z]=i;
		a[i].pt=ne[a[i].z];
	}
	r[n]=n;
	for(int i = 1;i<=n;i++)
	{
		add(i);
	}
//	for(int i = n;i>0;i--)cout<<sum[a[i].z]<<" ";
//	cout<<endl;
	for(int i = 1;i<=m;i++)
	{
		cout<<sum[i]<<" ";
	}
	return 0;
 } 
