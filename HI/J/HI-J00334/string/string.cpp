#include <bits/stdc++.h>
using namespace std;
string P;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1;i<=n;i++) 
	{
		long long a;
		char c;
		cin>>a>>c;
		for (int j=1;j<=a;j++) P+=c;
	}
	string s=P;
	reverse(s.begin(),s.end());
	if (s==P){cout<<0;return 0;}
	long long num=1,mx=-1e18;
	for (int i=1;i<P.size();i++)
	{
		if (s[i]==s[i-1]) num++;
		else 
		{
			mx=max(mx,num);
			num=1;
		}
	}
	cout<<mx;
	return 0;
}
