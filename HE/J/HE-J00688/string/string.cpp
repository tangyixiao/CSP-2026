#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long  n;
	string s;
	cin>>n;
	long long l;
	int flag=0;
	long long k;
	for(int i=1;i<=n;i++)
	{
		char c;
		cin>>k>>c;
		if(k>=1000000) 
		{
			flag=1;
			l=k;
		}
		for(int j=1;j<=k;j++) s+=c;
	}
	long long p=s.size();
	long long ans=0;
	for(int i=0;i<p/2;i++)
	{
		if(s[i]!=s[p-1-i]) ans++;
	}
	if(flag==1) cout<<l;
	else cout<<ans;
	return 0;
}
