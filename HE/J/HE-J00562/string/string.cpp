#include <bits/stdc++.h>
using namespace std;

long long n,m=-1,sum=0,p=0,q=0;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		long long t;
		string s1;
		cin >> t >> s1;
		for(long long j=1;j<=t;j++)
		{
			s+=s1;
			m++;
		}
	}
	for(long long i=0;i<=m;i++)
	{
		for(long long j=m-i;j>=0;j--)
		{
			if(s[i]!=s[j])
			{
				s[j]=s[i];
				sum++;
				break;
			}
			else if(s[i]==s[j])
			{
				cout << sum;
				return 0;
			}
		}
	}
	return 0;
}
