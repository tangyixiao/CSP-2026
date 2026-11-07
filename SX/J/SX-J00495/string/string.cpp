#include<bits/stdc++.h>
using namespace std;
long long n,xxx,sum,ans;
char yyy;
string ss="";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--)
	{
		cin>>xxx>>yyy;
		long long kkk=xxx;
		while(xxx--)
		{
			ss+=yyy;
		}
		sum+=kkk;
	}
	if(sum%2==0)
	{
		for(int i=0;i<sum/2;i++)
		{
			if(ss[i]!=ss[sum-i-1])
			{
				ans++;
			}
		}
	}
	else
	{
		for(int i=0;i<(sum+1)/2;i++)
		{
			if(ss[i]!=ss[sum-i-1])
			{
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}