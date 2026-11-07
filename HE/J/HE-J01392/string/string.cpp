#include<bits/stdc++.h>
using namespace std;
string s;
long long n,a;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		char q;
		cin>>a>>q;
		while(a--)
		{
			s+=q;
		}
	}
	long long ew=s.size(),ans=0;
	for(long long i=0;i<=(s.size()-1)/2;i++)
	{
		if(s[i]!=s[ew-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
