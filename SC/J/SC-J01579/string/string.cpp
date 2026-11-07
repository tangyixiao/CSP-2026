#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout");
	long long n,length=0;
	string s;
	
	cin>>n;
	
	for(long long i=1;i<=n;i++)
	{
		long long cd;
		char k;
		
		cin>>cd>>k;
		
		length+=cd;
		for(long long i=1;i<=cd;i++)
		{
			s+=k;
		}
	}
	long long num=0;
	long long l=0,r=length-1;
	
	while(l<r)
	{
		if(s[l]!=s[r])
		{
			num++;
		}
		l++;
		r--;
	}
	cout<<num;
	return 0;	
} 