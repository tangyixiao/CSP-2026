#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a[10000000];
	a[0]=0;
	int c[10000000];
	int m[111111111];
	int shu=0;
	cin>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			m[j+a[i-1]]=c[i];
			x++;
		}
	}
	
	for(int i=1;i<=x/2;i++)
	{
		if(m[i]!=m[x-i+1])
		{
			shu++;
		}
	}
	cout<<shu;
	return 0;
}
