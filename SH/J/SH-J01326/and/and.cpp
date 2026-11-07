#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],s,f[200005]={},ss,x;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n==m)
	{
		for(int i=1;i<=n;i++)
		{
			if(i==1)s=a[i];
			else s&=a[i];
		}
	} 
	if(n>10000)
	{
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
	}
	for(int i=1;i<=m;i++)
	{
		s=0;
		for(int j=1;j<=n;j++)
		{
			if(i==1&&a[j]>s)
			{
				x=j;
				s=a[j];
			}
			long long sss=(ss&a[j]);
			cout<<ss<<" "<<a[j]<<" "<<sss<<endl;
			if(f[j]==0&&s<sss)
			{
				s=(ss&a[j]);
				x=j;
			}
		}
		ss=s;
		f[x]=1;
		//cout<<ss<<endl;
	}
	cout<<ss;
} 
