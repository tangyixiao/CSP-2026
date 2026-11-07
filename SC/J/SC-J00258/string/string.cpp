#include<bits/stdc++.h>
#include<string>
#define int long long
using namespace std;
int n,x,cnt;
string s;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		x+=a;
		while(a--)
			s+=c;
	}
	for(int i=1;i<=x/2;i++)
	{
		if(s[i-1]!=s[x-i])
			cnt++;
	}
	cout<<cnt;
	return 0;
}
