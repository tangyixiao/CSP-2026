#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin >> a >> c;
		for(int j=1;j<=a;j++)
		{
			s+=c;
		}
	}
	int l=s.size(),ans=0;
	s=" "+s;
	for(int i=1;i<=(l+1)/2;i++)
	{
		if(s[i]!=s[l-i+1])ans++;
	}
	cout << ans;
	return 0;
} 
