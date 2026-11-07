#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],sum,cnt,g;
char s[200010];
string ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long aa;
		char s;
		cin>>aa>>s;
		for(int j=1;j<=aa;j++)ans=ans+s;
	}
	int l=ans.size();
	for(int i=0;i<l/2;i++)
	{
		if(ans[i]!=ans[l-i-1])cnt++;
	}
	cout<<cnt;
	return 0;
 } 
