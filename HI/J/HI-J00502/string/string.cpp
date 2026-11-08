#include<bits/stdc++.h>
using namespace std;
int a[10000000000];
char b[1000000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0,ans1=0;
	string c,c1,c2;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++)
		{
			c+=b[i]; 
		
		}
	
	}
	for(int i=0;i<c.size()/2+1;i++)
	{
		c1+=c[i];
	}
	for(int i=c.size();i>=c.size()/2;i--)
	{
		c2+=c[i];
	}
	if(c1==c2)
	{
		cout<<"0";
		return 0;
	}
	else
	{
		for(int i=0;i<c.size()/2+1;i++)
		{
			if(c1[i]!=c2[i])
			{
				c2[i]=c1[i];
				ans++;
			}
			if(c1[i]==c2[i])
			{
				if(ans>ans1)
				{
					ans1=ans;
				}
			}
		}
	}
	cout<<ans1;
	return 0;
}
