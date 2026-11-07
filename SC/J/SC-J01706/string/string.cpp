#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
long long n,a,zh,ans;
char c,sc;
bool f=1;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		sc=c;
		if(c==sc&&f)f=0;
		for(int j=1;j<=a;j++)s+=c;
		zh+=a;
	}
	if(f)
	{
		cout<<0;
		return 0;	
	}
	for(int i=0;i<zh/2;i++)
	{
		if(s[i]!=s[zh-i-1])ans++;
	}
	cout<<ans;
	return 0;
}