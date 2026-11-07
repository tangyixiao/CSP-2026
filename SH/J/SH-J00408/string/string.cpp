#include<bits/stdc++.h>
using namespace std;
long long n,m,l,r,sum;
string s,t;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long x;
		char lr;
		cin>>x>>lr;
		for(long i=1;i<=x;i++)
		{
			s+=lr;
			t+=lr;
		}
	}
	reverse(t.begin(),t.end());
	if(t==s) cout<<0;
	else
	{
		l=0,r=s.size()-1;
		while(l<=r)
		{
			if(s[l]!=s[r]) sum++;
			l++;
			r--;
		}
		cout<<sum;
	}
	return 0;
}
