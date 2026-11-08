#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,sa;
	int l,n;
	cin>>l;
	for(int i=1;i<=l;i++)
	{
		cin>>n>>sa;
		for(int j=1;j<=n;j++)
		{
			s+=sa;
		}
	}
//	cout<<s<<'\n';
	int sum=0,ls=s.size();
	for(int i=0;i<ls/2;i++)
	{
		if(s[0]!=s[ls-1])
		{
			sum++;
			//cout<<s[i]<<' '<<s[ls-i-1];
		}
	}
	cout<<sum;
	return 0;
}

