#include<bits/stdc++.h>
using namespace std;
int a[10000];
char b[10000];
char wz[10000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x=1,c=0,cishu=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		c+=a[i];
		for(int j=1;j<=a[i];j++)
		{
			wz[x]=b[i];
			x++;
		}
	}
	if(c%2!=0)
	{
		for(int i=1,j=c;i<=(c-1)/2,j>=(c-1)/2+2;i++,j--)
		{
			if(wz[i]!=wz[j]) cishu++;
		}
	}
	cout<<cishu;
}