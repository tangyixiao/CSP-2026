#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int t;
	cin>>n;
	string s;
	vector<char> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=1;i<=n*2-1;i++)
	{
		if(i%2==0)
		{
			for(int j=1;j<=i;j++)
			{
				s=s+v[i+1];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]=s[n+1-i])
		{
			
			t=0;
		}
	}
	cout<<t;
	return 0;
 } 