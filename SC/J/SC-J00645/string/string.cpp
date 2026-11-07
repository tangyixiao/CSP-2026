#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long int n,l=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long int x;
		char q;
		cin>>x>>q;
		l+=x;
		for(int j=1;j<=x;j++)
		{
			s+=q;
		}
	}
	for(int i=0;i<=(l-1)/2;i++)
	{
		if(s[i]!=s[l-1-i])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}