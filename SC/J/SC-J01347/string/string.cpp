#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int n,cnt,sum;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char b;
		cin>>a>>b;
		for(int i=1;i<=a;i++) s+=b;
		cnt+=a;
	}
	for(int i=0;i<(cnt+1)/2;i++)
	{
		if(s[i]!=s[cnt-i-1]) sum++;
	}
	cout<<sum;

	return 0;
 }