#include<bits/stdc++.h>
using namespace std;
int n;
long long m,ans;
char c;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		char y;
		int x;
		cin>>x>>y;
		m+=x;
		while(x--)
		{
			s+=y;
		} 
	}
	for(int i=s.size()/2;i<s.size();i++)
	{
		if(s[i]!=s[s.size()-i-1])
		{
			ans++;
		} 
	}
	cout<<ans;
	return 0;
}

