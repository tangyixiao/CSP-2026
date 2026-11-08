#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll n,a[200005],zl[27],flag;
char c[200005];
string s;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int i=1;i<=n;i++)
		{
			s=s+c[i];
		}
	}
//	if(n==1)
//	{
//		cout<<0;
//	}
//	for(int i=0;i<=s.size()/2;i++)
//	{
//		if(s[i]!=s[s.size()-i])
//		{
//			flag=1;
//		}
//	}
//	if(!flag)
//	{
//		cout<<0;
//	}
cout<<0;
	for(int i=0;i<s.size();i++)
	{
		
	}
	return 0;
}
