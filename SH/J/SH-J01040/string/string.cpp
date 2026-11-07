#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	string s;
	int ans=0;
	vector<int>a(n+1);
	vector<char>c(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
//		cout<<s<<'\n';
		ans+=a[i];
	}
	int num=ans/2;
	int cnt=0;
//	cout<<s<<' '<<ans<<' '<<num<<'\n';
	for(int i=0;i<num;i++)
	{
//		cout<<s[i]<<' '<<s[ans-i-1]<<'\n';
		if(s[i]!=s[ans-1-i])
			cnt++;
	}
	cout<<cnt;
}
