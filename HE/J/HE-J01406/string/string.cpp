#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long w;char a;
		cin>>w;
		cin>>a;
		for(int j=1;j<=w;j++)
		{
			s=s+a;
		}
	}
	long long r=s.size()-1,l=0;
	long long dum=0;
	while(l<=r)
	{
		if(s[l]!=s[r])
		dum++;
		l++;
		r--;
	}
	cout<<dum;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
