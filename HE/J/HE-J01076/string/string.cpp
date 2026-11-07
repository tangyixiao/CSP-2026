#include <bits/stdc++.h>
using namespace std;
long long n,cnt;
string s1,s2;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int s;
	char x;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		cin>>x;
		for(int j=1;j<=s;j++)
		{
			s1+=x;
		}
	}
	for(int i=s1.size()-1;i>=0;i--)
	{
		s2+=s1[i];
	}
	if(s1==s2)
	{
		cout<<0;
		return 0;
	}
	for(int i=1;i<s1.size();i++)
	{
		if(s1[i]==s1[i-1])
		{
			cnt++;
		}
		else
		{
			cnt=s1.size()-cnt-2;
			break;
		}
	}
	cout<<cnt;
	return 0;
}
