#include<bits/stdc++.h>
using namespace std;
char s[100000000000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long ans=0,n;
	cin>>n;
	long long k=0,p=0;
	for(int i=1;i<=n;i++)
	{
		int x;
		char y;
		cin>>x>>y;
		p+=x;
		for(int j=k;j<k+x;j++)
		{
			s[j]=y;
		}
		k=k+x;
	}
	for(int i=0,j=p-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			ans++;
		}
	}
	cout<<ans;
}