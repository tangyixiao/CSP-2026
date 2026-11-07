#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
string s=" ";
long long a;
char b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		for(int i=1;i<=a;i++)s+=b;
	}
	int y=s.size()-1;
	if(y%2==0)
	{
		int l=y/2;
		int r=y/2+1;
		while(r<=y)
		{
			if(s[r]!=s[l])cnt++;
			l--;r++;
		}
	}else
	{
		int l=y/2;
		int r=y/2+2;
		while(r<=y)
		{
			if(s[r]!=s[l])cnt++;
			l--;r++;
		}
	}
	cout<<cnt;
	return 0;
} 
