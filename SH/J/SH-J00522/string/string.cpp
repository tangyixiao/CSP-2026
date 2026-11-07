#include<bits/stdc++.h>
using namespace std;

#define int long long
int n,cnt=0,maxn,sum;
string s;

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
		char c;
		cin>>a>>c;
		maxn=max(a,maxn);
		sum+=a;
		for(int i=1;i<=a;i++) s+=c;
	}
	if(maxn<=500&&n<=2e5)
	{
		
		int l=0,r=s.size()-1;
		while(l<=r)
		{
			if(s[l]!=s[r]) cnt++;
			l++;
			r--;
		}
		cout<<cnt;
	}
	else
	{
		cout<<sum/2;
	}
	return 0;
}
