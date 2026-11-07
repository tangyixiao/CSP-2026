#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans=0;
string s;
void f(string s)
{
	int l=s.size();
	s=' '+s;
	for(int i=1;i<=l/2;i++)
	{
		if(s[i]!=s[l-i+1]) ans++;
	}
}
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++) s+=c;
	}
	f(s);
	cout<<ans;
	return 0;
}
//Trick||Treat!
//sha yi si

//jin nian CCF zen me zhe me ai chu zi fu chuan?
//hai hao mei you shu shu ti
//sb 998244353
