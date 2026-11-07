#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+50;
ll a[N],ans;
int n;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		char c;
		cin>>a[i];
		cin>>c;
		for(int j=1;j<=a[i];++j)
		{
			s+=c;
		}
	}
	ll len=s.size();
	s=" "+s;
	for(int i=1;i*2<=len;++i)
	{
		if(s[i]!=s[len-i+1]) ans++;
	}
	cout<<ans;
	return 0;
} 
