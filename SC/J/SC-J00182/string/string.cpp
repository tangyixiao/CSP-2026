#include<bits/stdc++.h>
using namespace std;
char s[100000003];
int n,num=-1;
int ans=0;
bool pan()
{
	bool qwq=false;
	for(int i=0;i<num/2;i++)
	{
		if(s[i]!=s[num-i-1])
		{
			ans++;
			qwq=true;
		}
	}
	if(qwq)
	{
		return false;
	}
	return true;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long a;
		char q;
		cin>>a>>q;
		for(long long j=1;j<=a;j++)
		{
			num++;
			s[num]=q;
		}
	}
	if(pan())
	{
		cout<<0;
	}
	else
	{
		cout<<ans;
	}
	return 0;
}