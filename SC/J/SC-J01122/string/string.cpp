#include<bits/stdc++.h>
using namespace std;
int n;
long long num;
string s;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int m;
		char s1;
		cin>>m;
		cin>>s1;
		for(int i=1;i<=m;i++)
		{
			s+=s1;
		}
	}
	for(int i=s.size()/2;i<s.size();i++)
	{
		if(s[i]!=s[s.size()-i-1])
		{
			num++;
		}
	}
	cout<<num;
	return 0;
}