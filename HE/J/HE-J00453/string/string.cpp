#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;

int n;
long long ans=0;
string s,s1;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		long long a;
		char c;
		cin>>a>>c;
		for(int j = 1;j <= a;j++) s+=c;
	}
	s1=s;
	reverse(s.begin(),s.end());	
	if(s1==s) cout<<0<<endl;
	else 
	{
		for(long long i = 0;i < s.size()&&i<=s.size()-i-1;i++)
		{
			if(s[i]!=s[s.size()-i-1]) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
