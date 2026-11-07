#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
#define int long long
int n,k,cnt,ans;
char op;
string s;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	while(n--)
	{
		cin>>k>>op;
		for(int i=1;i<=k;i++)
		{
			s[++cnt]=op;
		}
	}
	for(int i=1;i<=cnt/2;i++)
	{
		if(s[i]!=s[cnt-i+1])ans++;
	}
	cout<<ans;
	fclose(stdin);
	return 0;
}
