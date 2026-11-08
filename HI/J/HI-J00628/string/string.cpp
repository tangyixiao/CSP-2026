#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	string s;
	long long n,ans=0;
	char a;
	cin>>n;
	for(long long i=0;i<n;i++)
	{
		long long j;
		cin>>j>>a;
		for(;j>0;j--)
		{
			s+=a;
		}
	}
	
	
	
	for(long long i=0;i<(s.size())/2;i++)
	{
		char l,r;
		l=s[i];
		r=s[(s.size())-i-1];
		if(l!=r)
		{
			ans++;
		}
		cout<<l<<' '<<r<<endl;
	}
	cout<<ans;
	
	return 0;
}
