#include<bits/stdc++.h>
using namespace std;
long long arr[200001];
char ch[200001];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	for(long long i=1;i<=n;i++)
	{
		cin>>arr[i]>>ch[i];
		for(long long j=1;j<=arr[i];j++)s+=ch[i];
	}
	long long l=0,r=s.size()-1;
	long long cnt=0;
	while(l<=r)
	{
		if(s[l]!=s[r])cnt++;
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
}
