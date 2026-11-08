#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0,ans=0;
	char c[200005];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int l;
		cin>>l;
		char z;
		cin>>z;
		for(int j=1;j<=l;j++) c[++cnt]=z;
	}
	for(int i=1;i<=cnt/2;i++)
	{
		if(c[i]!=c[cnt+1-i]) ans++;
	}
	cout<<ans;
	return 0;
}
