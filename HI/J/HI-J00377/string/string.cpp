#include<bits/stdc++.h>
using namespace std;
long long a[10000 5];
char b[105];
string s1[1000005],s2[1000005];
int main()
{
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	long long n;
	cin>>n;
	long long cnt = 0;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=a[i];j++)
		{
			s1[j] = b[i];
		}
	}
	for(int i = n;i>=1;i--)
	{
		for(int j = 1;j<=a[i];j++)
		{
			s2[j] = b[i];
		}
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=a[i];j++)
		{
			for(int k = (n-1)/2;k<=n;k++)
			{
				if(s1[k]==s2[k])
				{
					s1[k] = s2[k];
				}
				else if(s1[k]!=s2[k])
				{
					s1[k] = s2[k];
					cnt++;
				}
			}
		}
	}
	cout<<cnt;
	
	return 0; 
} 
