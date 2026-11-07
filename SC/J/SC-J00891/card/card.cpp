#include<bits/stdc++.h> 
using namespace std;
int n,m,c;
int a[5010];
int b[5010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			cout<<i;
		}
	}
	cout<<m;
	return 0;
}