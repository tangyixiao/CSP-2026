#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],t[500005],len;
void putcard(int x)
{
	bool ef=0;
	for(int i=1;i<=len;i++)
	{
		if(ef) b[i]=0;
		else if(b[i]==x)
		{
			ef=1;
			len=i;
		}
	}
	if(!ef) b[++len]=x;
	return;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		memset(b,0,sizeof(b));
		for(int j=i;j<=n;j++) putcard(a[j]);
		bool bt[300005];
		memset(bt,0,sizeof(bt));
		for(int j=1;j<=len;j++) bt[b[j]]=1;
		for(int j=1;j<=m;j++)
		if(bt[j])
		{
			t[j]++;
			//cout<<i<<':'<<j<<endl;
		}
	}
	for(int i=1;i<m;i++) cout<<t[i]<<' ';
	cout<<t[m];
	return 0;
}
