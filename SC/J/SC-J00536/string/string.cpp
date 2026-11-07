#include<bits/stdc++.h>
using namespace std;
long long a[1000000];char c[100000];char c1[1000000],c2[1000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		ans=ans+a[i];
	}
	int q=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			c1[q]=c[i];
			q++;	
		} 
	}
	for(int i=1;i<=q;i++)
	{
		c2[i]=c1[q-i];
	}
	int s=0;
	for(int i=1;i<=ans/2;i++)
	{
		if(c1[i]!=c2[i])
		{
			s++;
		}
		else continue; 
	}
	cout<<s;
	return 0;
}
