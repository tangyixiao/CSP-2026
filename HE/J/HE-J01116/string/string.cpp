#include<bits/stdc++.h>
using namespace std;
long long a[1000005],a1[1000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0,c=0;
	string b,s1,s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	cin>>a[i]>>b[i]; 
	c=c+a[i];
	}

	for(int i=1;i<=c;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			s[j]=b[i];		
		}	
	}
	for(int i=1;i<=c;i++)
	{
		for(int j=c;j>=1;j--)	
		{
		s1[i]=s[j];		
		}
	}
	for(int i=1;i<=c/2;i++)
	{
		if(s[i]!=s1[i])
	ans++;
}

cout<<ans;
	return 0;
} 
