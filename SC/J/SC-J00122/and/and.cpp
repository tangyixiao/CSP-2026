#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],b[31][N];
long long ans=0;
vector<int> q,q1;
void zhuan(int x)
{
	for(int i=0;i<31;i++)
	{
		if(a[x]&(1<<i)) b[i][x]=1;
		else b[i][x]=0;
	}
	return ;
}
long long qpow(int b)
{
	long long res=1,a=2;
	while(b)
	{
		if(b%2) res*=a;
		a*=a;
		b/=2;
	}
	return res;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		q.push_back(i);
		zhuan(i);
	}
	for(int k=30;k>=0;k--)
	{
		for(auto i:q)
		{
			if(b[k][i]) q1.push_back(i);
		}
		if(q1.size()>=m)
		{
			ans+=qpow(k);
			q.clear();
			for(auto i:q1) q.push_back(i);
		}
		q1.clear();
	}
	cout<<ans;
	return 0;
}