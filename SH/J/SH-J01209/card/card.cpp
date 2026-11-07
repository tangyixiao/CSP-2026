#include<bits/stdc++.h> 
using namespace std;
const int N=5e5+7;
int a[N],q[N],c[N],z[N],j[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		q[a[i]]+=1;
	}
	
	
	for(int i=1;i<=n;i++)
	{
		c[i]=0-q[a[i]]+1+j[a[i]];
		q[a[i]]-=1;
		j[a[i]]+=1;
	}
	
	int num=0;
	for(int i=1;i<=n;i++)
	{
		num+=c[i];
		int k=i+num;
		z[a[i]]=max(z[a[i]],k);
	}
	
	for(int i=1;i<=m;i++)
	{
		cout<<z[i]<<" ";
	}
	return 0;
}
