#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,h=0;
	cin>>n;
	string b,s="";
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		h+=a;
		for(int j=1;j<=a;j++)s=s+b;
	}
	long long l=0,r=h-1;
	int cnt=0;
	while(l!=(h-1)/2)
	{
		if(s[l]!=s[r])cnt++;
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
}
