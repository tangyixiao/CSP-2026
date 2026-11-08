#include<bits/stdc++.h>
using namespace std;
string s,c;
char g[200005];
bool f=0;
long long n,ab[200005],a,w=1,sum=0,ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c[i];
		ab[i]=a;
		sum+=ab[i];
	}
	for(int i=2;i<=n;i++)
	{
			if(c[i]==c[1])
			{
				f=1;
			}
			else
			{
				f=0;
			}
	}
	if(f==1)
	{
		cout<<0;
		return 0;
	}
	else
	{
		if(sum%2==0)
		{
			ans=sum/2;
			cout<<ans;
			return 0;
		}
		if(sum%2!=0)
		{
			cout<<(sum-1)/2;
			return 0;
		}	
	}
	
	return 0;
} 
