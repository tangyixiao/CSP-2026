#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,c=0,p=0;
	cin>>n;
	char s[1000000];
	for(int i=0;i<n;i++)
	{
		int a;
		char b;
		cin>>a>>b;
		for(int j=0;j<a;j++)
			s[p+j]=b;
		p+=a;
	}
	string rs,rv;
	rs=s;
	rv=s;
	reverse(rv.begin(),rv.end());
	if(rv==rs)
	{
		cout<<0;
		return 0;
	}
	else
	{
		for(int i=0;i<rs.size()/2;i++)
		{
			if(rs[i]==rs[rs.size()-i-1]) continue;
			else c++;
		}
	}
	cout<<c;
	return 0;
 }