#include<bits/stdc++.h>
using namespace std;
long long m,a[200005];
long long sm;
string b[200005],s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>m;
	for(long long i=1;i<=m;i++)
	{
		cin>>a[i]>>b[i];
		for(long long j=1;j<=a[i];j++)
		{
			s+=b[i];
		}
	}
	if(s.length()%2==1)
	{
		for(long long i=0;i<s.length()/2;i++)
		{
			if(s[s.length()/2-i-1]!=s[s.length()/2+i+1])
			{
				sm++;
			}
		}
		cout<<sm;
		return 0;
	}
	else
	{
		for(long long i=0;i<s.length()/2;i++)
		{
			if(s[s.length()/2-i-1]!=s[s.length()/2+i])
			{
				sm++;
			}
		}
		cout<<sm;
		return 0;	
	}
	return 0;
} 
