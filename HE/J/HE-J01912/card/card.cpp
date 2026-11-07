#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#define int long long
using namespace std;
struct Q
{
	int n[500086];
	int rwr;
}q;
int cs[500086],m[500086]; 
void fd(int k)
{
	bool p=0;
	int l=q.rwr;
	for(int i=1;i<=l;i++)
	{
		if(q.n[i]==k&&!p)
			p=1,q.rwr=i-1;
		if(p==1)
			q.n[i]=0;
	}
}
void pushq(int s)
{
	q.rwr++;
	q.n[q.rwr]=s;
}
void orz()
{
	memset(q.n,0,sizeof q.n);
	q.rwr=0;
}
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	q.rwr=0;
	for(int i=1;i<=n;i++)
		cin>>m[i];
	for(int i=1;i<=n;i++)
	{
		orz();
		for(int j=i;j<=n;j++)
		{
			fd(m[j]);
			pushq(m[j]);
		}
		for(int j=1;j<=q.rwr;j++)
		{
//			cout<<q.n[j]<<' ';
			cs[q.n[j]]++;
		}
//		cout<<'\n';
		}
	for(int i=1;i<=k;i++)
		cout<<cs[i]<<' ';
}
