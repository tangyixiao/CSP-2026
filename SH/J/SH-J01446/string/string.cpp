#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,a[200005],l,ans;
string s,b[200005];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		l+=a[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=b[i];
		}
	}
	//cout<<s<<s[0];
	for(int i=0;i<(l+1)/2;i++)
	{
		if(s[i]!=s[l-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
