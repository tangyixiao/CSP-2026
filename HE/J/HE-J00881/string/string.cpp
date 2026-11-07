#include<bits/stdc++.h>
using namespace std;
int n;
int a;
char c;
string s;
int t;
int len;
int l,r;
int sum=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(int j=1;j<=a;j++)
		{
			s=s+c;
		}
	}
	len=s.size();
	if(len%2==0)
	{
		l=len/2-1;
		r=l+1;
	}else
	{
		l=len/2-1;
		r=l+2;
	}
	
	for(int i=0;i<=len/2-1;i++)
	{
		if(s[l]!=s[r])
		{
			sum++;
		}
		l--;
		r++;
	}
	cout<<sum;
	return 0;
 } 
