#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0,l=0;
	cin>>n;
	string s=" ";
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		l+=a;
		for(int j=1;j<=a;j++)s+=c;
	}
	for(int i=1;i<=(l+1)/2;i++)
	{
		if(s[i]!=s[l+1-i])ans++;
	}
	cout<<ans;
 } 