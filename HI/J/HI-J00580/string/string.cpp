#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long t;
	cin>>t;
	vector<long long>v;
	vector<char>v1;
	set<char>st;
	if(t==1)
	{
		cout<<0<<endl;
		return 0;
	}
	int m=0;
	int p=0;
	string s;
	while(t--)
	{
		long long n;
		char c;
		cin>>n>>c;
		v.push_back(n);
		v1.push_back(c);
		for(long long i=0;i<n;i++)
		{
			s+=c;
		}
	}
	
	long long cnt=0;
	long long i,j;
	if(s.size()/2==0)
	{
		i=s.size()/2;
		j=i+1;
	}
	else
	{
		i=s.size()/2;
		j=i;
	}
	while(i>=0 || j<=t-1)
	{
		if(s[i]!=s[j])
		{
			cnt++;
		}
		i--;
		j++;
	}
	cout<<cnt;
	return 0;
}
