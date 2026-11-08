#include<bits/stdc++.h>
using namespace std;
long long a[100000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	string s="";
	char ch;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>ch;
		while(a[i])	
		{
			s+=ch;
			a[i]--;
		}
	}
	long long l=0,r=s.size()-1;
	while(l<=r)
	{
		if(s[l]!=s[r])
		{
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans;
	return 0;
} 
