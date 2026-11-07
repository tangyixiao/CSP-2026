#include<bits/stdc++.h>
using namespace std;
int n;
int l[200005];
char c[200005];
long long tl;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&l[i]);
		cin >>c[i];
		for (int j=1;j<=l[i];j++) s+=c[i];
		tl+=l[i];
	}
	long long ans=0;
	for (int i=0;i<tl/2;i++)
	{
		if (s[i]!=s[tl-i-1])
		{
			ans++;
		}
	}
	cout <<ans;
	return 0;
}
