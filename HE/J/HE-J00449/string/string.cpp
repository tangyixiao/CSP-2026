#include <bits/stdc++.h>
using namespace std;
long long n,m,a,ans;
string s; 
char b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("srting .out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		for(int i=1;i<=a;i++)
		{
			s+=b;
		}
		m+=a; 
	}
	for(int i=0;i<m/2;i++)
	{
		if(s[i]!=s[m-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
