#include<bits/stdc++.h>
using namespace std;
int n,m;
string s,s_1;
int sum;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int k;
		char c;
		cin>>k>>c;
		for(int j=1;j<=k;j++)
		{
			s+=c;
			s_1+=c;
		}
	}
	reverse(s_1.begin(),s_1.end());
	if(s.size()%2==0)
	{
		m=s.size()/2-1;
		for(int i=0;i<=m;i++)
		{
			if(s[i]!=s_1[i])
			{
				sum++;
			}
		}
	}
	else
	{
		m=s.size()/2;
		for(int i=0;i<m;i++)
		{
			if(s[i]!=s_1[i])
			{
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
