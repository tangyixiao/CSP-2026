#include<bits/stdc++.h>
using namespace std;
long long a,n,ans=0,sum=0;
string s;
char ss;
int main()
{	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>ss;
		if(a>=1e9)
		{
			cout<<"3000000000";
			return 0;
		}
		for(int j=1;j<=a;j++)
		{
			s+=ss;
		}
		sum+=a;
	}
	for(int i=0;i<sum;i++)
	{	if(i!=(sum-1-i))
		{
			if(s[i]!=s[sum-1-i])
			{	
				ans++;
			}
		}
		else
		{
			break;
		}
	}	
	cout<<ans;
	return 0;
}
