#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--)
	{
		int u;
		char c;
		cin>>u>>c;
		while(u--)
		{
			s+=c;
		}
	}
	int ans = 0;
	for(int i = 0;i<s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-1-i])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
