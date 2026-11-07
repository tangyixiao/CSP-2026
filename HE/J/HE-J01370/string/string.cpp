#include<bits/stdc++.h>
using namespace std;
string s,s1;
int ans=1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	char a;
	int g;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>g>>a;
		for(int i=1;i<=g;i++)
		{
			s+=a;
		}
	}	
	for(int i=s.length()-1;i>=0;i--)
	{
	    s1+=s[i];
	}
	if(s1==s)
	{
		cout<<0;
		return 0;
	}
	g=s.length()/2+1;
	int cnt=0;
	for(int i=g+1;i<=s.length();i++)
	{
		if(s[i]!=s[i-2*ans])  cnt++;
		ans++;
	}
	cout<<cnt;
	return 0;
}
