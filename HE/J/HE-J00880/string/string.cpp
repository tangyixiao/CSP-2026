#include<bits/stdc++.h>
using namespace std;
signed long long n,a,l=0,ans=0;
char s[1000000001],c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		memset(s+l+1,c,a);
		l+=a;
	}
	for(int i=1;i<=l/2;i++)
	{
		if(s[i]!=s[l+1-i]) ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
