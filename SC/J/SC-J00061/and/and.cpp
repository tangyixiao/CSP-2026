#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int> 
#define endl '\n'
int a[200005],c[200005],e[200005];
string b[200005],d[200005];
int ans=0; 
bool cmp(int a,int b)
{
	return a>b;
}
string totwo(int x)
{
	string two="";
	while(x)
	{
		if(x%2==0) two='0'+two;
		else two='1'+two;
		x=x/2;
	}
	while(two.size()!=30) two='0'+two;
	return two;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		b[i]=totwo(a[i]);
//		cout<<b[i]<<" ";
	}
	for(int i=0;i<30;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(b[j][i]=='1') c[i]++;
		}
		if(c[i]<m) c[i]=-1;
//		cout<<c[i]<<" ";
	}
	int fir=-1;
	for(int i=0;i<30;i++)
	{
		if(c[i]!=-1)
		{
			fir=i;
			break;
		}
	}
//	cout<<fir<<" "; 
	if(fir==-1)
	{
		cout<<0;return 0;
	}
	int tot=1;
	for(int i=1;i<=n;i++)
	{
//		cout<<b[i][fir]<<" ";
		if(b[i][fir]=='1')
		{
			d[tot]=totwo(a[i]);
//			cout<<d[tot]<<" ";
			tot++;
		}
	}
	for(int i=0;i<30;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(d[j][i]=='1') e[i]++;
		}
//		cout<<e[i]<<' ';
		if(e[i]>=m) ans+=pow(2,30-i-1);
	}
	cout<<ans;
	return 0;
}