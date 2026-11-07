#include<bits/stdc++.h>
using namespace std;
const int NUM=2*1e5+5;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int v[NUM];
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	sort(v+1,v+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		cout<<v[i]<<' ';
	}
	cout<<'\n';
	int num=v[1];
	for(int i=2;i<=m;i++)
	{
		num&=v[i];
	}
	printf("%d",num);
	return 0;
}