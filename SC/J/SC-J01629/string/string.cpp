#include <bits/stdc++.h>
using namespace std;
int n,a;
string c,s=" ";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		cin>>c;
		for(int j=1;j<=a;j++)s+=c;
	}
	int len=s.size();
	int ans=0;
	for(int i=1;i<=len/2;i++)
	{
		if(s[i]!=s[len-i])ans++;
	}
	printf("%d\n",ans);
	return 0;
}