#include <bits/stdc++.h>
using namespace std;
long long s[100005][2];                                                                                        
int main()
{
	int n;
	long long sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		long long x;char y;
		cin>>x>>y;
		s[i][0]=int(y-'a');
		s[i][1]=x;
	}
	long long j1=0,j2=n-1;
	for(int i=0;i*2<n;i++)
	{
		if(s[j1][0]==s[j2][0])
		{
			if(s[j1][1]<s[j2][1])
			{
				j1++;
				s[j2][1]-=s[j1][1];
			}
			else if(s[j1][1]>s[j2][1])
			{
				j2--;
				s[j1][1]-=s[j2][1];
			}
			else
			{
				j1++;
				j2--;
			}
		}
		else
		{
			if(s[j1][1]<s[j2][1])
			{
				j1++;
				s[j2][1]-=s[j1][1];
				sum+=s[j1][1];
			}
			else if(s[j1][1]>s[j2][1])
			{
				j2--;
				s[j1][1]-=s[j2][1];
				sum+=s[j2][1];
			}
			else
			{
				j1++;
				j2--;
				sum+=s[j1][1];
			}
		}
	}
	cout<<sum;
	return 0;
}
