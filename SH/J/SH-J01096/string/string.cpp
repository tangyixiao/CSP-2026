#include <bits/stdc++.h>
using namespace std;

long long n,t;
char a1;
vector <char> v1;
vector <long long> v2;
long long ans;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	char pree='0';
	for(int i=1;i<=n;i++)
	{
		cin>>t>>a1;
		if(a1!=pree)
		{
			v1.push_back(a1);
			v2.push_back(t);
		}
		else
		{
			v2[i-2]+=t;
		}
	}
	int pos=v1.size()-1;
	for(int i=0;i<v1.size()/2;i++)
	{
		long long len1=v2[i];
		while(len1>0)
		{
			while(v2[pos]==0)
			{
				pos--;
			}
		 	if(v1[pos]!=v1[i])
		 	{
		 		if(len1>v2[pos])
		 		{
		 			ans+=len1-v2[pos];
		 			len1-=v2[pos];
		 			v2[pos]=0;
				}
				else
				{
					ans+=len1;
					v2[pos]-=(v2[pos]-len1);
					len1=0;
				}
			}
			else
			{
				if(len1>v2[pos])
		 		{
		 			len1-=v2[pos];
		 			v2[pos]=0;
				}
				else
				{
					v2[pos]-=len1;
					len1=0;
				}
			}
			pos--;
		} 
	}
	cout<<ans;
	return 0;
}

