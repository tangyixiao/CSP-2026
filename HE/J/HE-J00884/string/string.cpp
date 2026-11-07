#include<bits/stdc++.h>
using namespace std;
long long ge,a,x;
string str,s; 
long long i;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>ge>>s;
		for(int j=0;j<ge;j++)
		{
			str+=s;
		}
	}
	long long j=str.size();
	if(j%2==0)
	{
		string s1=str.substr(0,j/2);
		string s2=str.substr(j/2,j);
		if(s1==s2)
		{
			cout<<"0";
		}
		else
		{
			for(i=1;i<=j/2;i++)
			{
				if(s1[i]!=s2[i])
				{
					x++;
				}
			}
			cout<<x;
		}
	}
	else
	{
		string s1=str.substr(0,j/2-1);
		string s2=str.substr(j/2+1,j);
		if(s1==s2)
		{
			cout<<"0";
		}
		else
		{
			for(i=1;i<=j/2-1;i++)
			{
				if(s1[i]!=s2[i])
				{
					x++;
				}
			}
			cout<<x;
		}
	}
	return 0;
} 
