#include<bits/stdc++.h>
#define int long long
using namespace std;
long long n,l,ans;
string s;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s[0]=' ';
	for(int i=1;i<=n;i++) 
	{
		char c;
		int a;
		cin>>a>>c;
		for(int j=l+1;j<=l+a;j++) s[j]=c;
		l+=a;
	}
	for(int i=1;i<=l/2;i++)
	{
		if(s[i]!=s[l+1-i]) ans++;
	}
	cout<<ans;
	return 0;
}
