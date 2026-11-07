#include <bits/stdc++.h>
using namespace std;
using LL=long long;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	ios::sync_with_stdio(0);
	cin.tie(0);
	LL sum=0;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		sum+=x;
		char a;
		cin>>a;
		for(int i=1;i<=x;i++)s+=a;
	}
	//cout<<s;
	LL ans=0;
	for(LL i=0;i<=sum/2;i++)
	{
		if(s[i]!=s[sum-1-i])ans++;
	}
	cout<<ans;
	return 0;
}
//12345 123456