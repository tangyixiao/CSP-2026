#include<bits/stdc++.h>
using namespace std;
long long i,m,n,a[500005]={0},b[500005]={0},c[500005]={0};
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;//有n局,m个输出 
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		c[a[i]]++;
	}
	for(i=1;i<=m;i++)
	{
		cout<<c[a[i]]<<" ";
	}
	return 0;
} 