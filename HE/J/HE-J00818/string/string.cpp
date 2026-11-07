#include<bits/stdc++.h>
using namespace std;
int a[200005],n,ans;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int s=0;
	for(int i=1;i<=n;i++)
	{
		char c1;
		cin>>a[i]>>c1;
		for(int j=1;j<=a[i];j++)
		{
			s++;
			c[s]=c1;	
		}
	}
	int s1=s/2;
	for(int i=1;i<=s1;i++)
	{
		if(c[i]!=c[s-i+1])
			ans++;
	}
	cout<<ans;
	return 0;
}
