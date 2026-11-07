#include<bits/stdc++.h>
using namespace std;
long long check(string a)
{
	long long ans=0;
	for(long long j=0;j<a.size()/2;j++)
	{
		if(a[j]!=a[a.size()-1-j])
		{
			ans++;
		}
	}
	return ans;
}
int n;
long long a;
string s,c;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>c;
		for(long long j=0;j<a;j++)
		{
			s=s+c;
		}
	}
	cout<<check(s);
	return 0;
}
