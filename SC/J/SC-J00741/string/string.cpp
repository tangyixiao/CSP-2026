#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,a[N],ans;
char b[N];
string s;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdin);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i];j++)
			s+=b[i];
	}
	for(int i=0,j=s.size()-1;i<s.size()/2;i++)
	{
		if(s[i]!=s[j]) ans++;
		--j;
	}
	cout<<ans;
	return 0;
} 