#include <bits/stdc++.h>
using namespace std;
string s;
char a;
long n,num=0,a1=0,x=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long i=0;i<n;i++)
	{
		cin>>a1>>a;
		for(long j=0;j<a1;j++)
		{
			s[j+x]=a;
		}
		x+=a1;
	}
	for(long i=0;i<(x/2+1);i++)
	{
		
		if(s[i]==s[x-i-1])
		{
			continue;
		}
		else
		{
			num++;
		}
	}
	cout<<num;
	return 0;
} 
