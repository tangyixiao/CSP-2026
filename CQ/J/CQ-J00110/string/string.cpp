#include<bits/stdc++.h>
using namespace std;
int t;
long long len,ans;
string s;
void f(string s,long long len)
{
	long long l = 0,r = len - 1;
	while(l < r)
	{
		if(s[l] != s[r])ans++;
		l++;
		r--;
	}
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>t;
	while(t--)
	{
		int x;
		char y;
		cin>>x>>y;
		for(int i = 1;i <= x;i++)s += y;
		len+=x;
	}
	f(s,len);
	cout<<ans;
	return 0;
}
