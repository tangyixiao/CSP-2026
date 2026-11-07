#include<bits/stdc++.h>
using namespace std;
int n;
long long a;
string s,c;
string s1;
long long ans=0;
string s2;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(long long j=1;j<=a;j++)
		{
			s+=c;
		}
	}
	s1=s;
	reverse(s.begin(),s.end());
	if(s==s1)
	{
		cout<<0;
		return 0;
	}
	
	for(long long i=0,j=s1.size()-1;i<s1.size(),j>=0;i++,j--)
	{	
		s2=s1;
		reverse(s1.begin(),s1.end());
		if(i==j||s1==s2)
		{
			break;
		}
		else 
		{
			reverse(s1.begin(),s1.end());
		}
		if(s1[i]!=s1[j])
		{
			s1[i]=s1[j];
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 


