#include<bits/stdc++.h>
using namespace std;
const int MAXN=5*1e5+10;
const int MAXX=3*1e5;
int n,m;
int t[MAXN]={0};
int b[MAXX]={0};
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>t[i];
	} 
	for(int i=1;i<=n;++i)
	{
		b[i]=rand();
	} 
	for(int i=1;i<=m;++i)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}

