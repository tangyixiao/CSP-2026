#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		long long ai=0;
		char ci=0;
		cin>>ai>>ci;
		for(int j=0;j<ai;j++)
		{
			s=s+ci;
		}
	}
	int sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s[s.size()-1-i])
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
