#include<bits/stdc++.h>
using namespace std;
int n,a[20010],xg;
string b[20010],s,c[20010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
	}
	for(int i=0;i<=n;i++)
	{
		b[i]=s.substr(i,1);
	}
	for(int i=1;i<=n;i++)
	{
		if(!(b[i]==b[n-i+1]))
		{
			xg++;
		}
	}
	cout<<xg;
	return 0;
}