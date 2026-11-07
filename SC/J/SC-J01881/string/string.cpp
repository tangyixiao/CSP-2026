#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++)
		{
			s=s+c;
		}
	}
	int ans=0;
	for(int i=0;i<=s.size()/2;i++)
	{
		if(s[i]!=s[s.size()-i-1])
			ans++;
	}
	cout<<ans;
	return 0;
}
