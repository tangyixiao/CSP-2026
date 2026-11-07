#include<bits/stdc++.h>
using namespace std;
long long n,ans,a,m,p;
char c,s[1000000000];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(int i=1;i<=a;i++)
			s[++m]=c;
		p+=a;
	}
	for(int i=1;i<=p/2;i++)
	{
		if(s[i]!=s[p-i+1])
			ans++;
	}
	cout<<ans;
    return 0;
}
