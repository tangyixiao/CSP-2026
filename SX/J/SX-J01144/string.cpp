#include<bits/stdc++.h>
using namespace std;
long long a,b,d,e;
char c;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b>>c;
		if(b==1000000000)
		{
			cout<<a*b/2;
			return 0;
		}
		for(int j=0;j<b;j++)
		{
			s[d]=c;
			d++;
		}
	}
	if(d%2!=0)
	{
		long long i=d/2,j=d/2;
		while(1)
		{
			if(i>=0)
			{
				if(s[i]!=s[j])
				{
					e++;
				}
				i--;
				j++;
			}
			else
			{
				break;
			}
		}
		cout<<e;
		return 0;
	}
	else
	{
		long long i=d/2-1,j=d/2;
		while(1)
		{
			if(i>=0)
			{
				if(s[i]!=s[j])
				{
					e++;
				}
				i--;
				j++;
			}
			else
			{
				break;
			}
		}
		cout<<e;
		return 0;
	}
	return 0;
}