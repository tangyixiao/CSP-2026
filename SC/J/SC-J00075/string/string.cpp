#include<bits/stdc++.h>
using namespace std;
struct S{
	long long s1;
	string s2;
}m[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long num=0;
	string s;
	long long  ans=0;
	cin>>n;
	for(int i =1;i<=n;i++)
	{
		cin>>m[i].s1>>m[i].s2;
		num+= m[i].s1;
	}
	if(n == 1)
	{
		cout<<0;
		return 0;
	}
	if(n == 2)
	{
		if(m[1].s2 == m[2].s2)
		{
			cout<<0;
			return 0;
		} 
		else
		{
			int mins = min(m[1].s1,m[2].s1);
			cout<<mins;
			return 0;
		}
	}
	if(num%2!=0)
	{
		for(int i = 1;i<=ceil(1.0*num/2)-1;i++)
		{
			if(m[i].s1 != m[n+1-i].s1)
			{
				ans+= max(m[i].s1-m[n+1-i].s1,m[n+1-i].s1-m[i].s1);
			}
			if(m[i].s2 != m[n+1-i].s2)
			{
				ans += min(m[i].s1,m[n+1-i].s1);
			}
		}
	}
	else
	{
		for(int i = 1;i<=num/2;i++)
		{
			if(m[i].s1 != m[n+1-i].s1)
			{
				ans+= max(m[i].s1-m[n+1-i].s1,m[n+1-i].s1-m[i].s1);
			}
			if(m[i].s2 != m[n+1-i].s2)
			{
				ans += min(m[i].s1,m[n+1-i].s1);
			}
		}
	}
	cout<<ans;
	return 0;
}