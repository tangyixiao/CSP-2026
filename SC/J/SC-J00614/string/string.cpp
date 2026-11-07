#include <bits/stdc++.h>
using namespace std;

long long n,s,ans,h=0;
char a;
string w;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>s>>a;
		for (int j=1;j<=s;j++)
		{
			w+=a;
		}
		h+=s;
	}
	for (long long i=0;i<=h/2;i++)
	{
		if (w[i]!=w[h-1-i])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
 } 