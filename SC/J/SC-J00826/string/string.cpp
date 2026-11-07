#include <bits/stdc++.h>
using namespace std; 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,sum=0;
	char c;
	cin>>n;
	string s,l,r;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cin>>c;
		for(int j=1;j<=a;j++)
		{
			s+=c;
		}
	}
	if(s.size()%2==0)
	{
		for(int i=0;i<=s.size()/2-1;i++)
		{
			l+=s[i];
		}
		for(int i=s.size()-1;i>=s.size()/2;i--)
		{
			r+=s[i];
		}
	}
	else
	{
    	for(int i=0;i<=s.size()/2;i++)
		{
			l+=s[i];
		}
		for(int i=s.size()-1;i>=s.size()/2;i--)
		{
			r+=s[i];
		}	
	}
	for(int i=0;i<=l.size()-1;i++)
	{
		if(l[i]!=r[i])
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}