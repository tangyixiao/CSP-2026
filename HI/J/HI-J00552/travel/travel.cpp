#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n,n1;
	string s,s1;
	cin>>n>>s>>n1>>s1;
	if(n==n1)
	{
		cout<<1;
		string s2,s3;
		s2=s[0]+s[1];
		s3=s1[0]+s1[1];
		if(s2==s3)
		{
			cout<<1;
			if((s[2]=='A'||s[2]=='B'||s[2]=='C')&&(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'))
			{
				cout<<1;
				if(s[2]=='A')
				{
					if(s1[2]=='B')
					{
						cout<<1;
						return 0;
					}
				}
				else if(s[2]=='B')
				{
					if(s1[2]=='C')
					{
						cout<<1;
						return 0;
					}
					else if(s1[2]=='A')
					{
						cout<<1;
						return 0;
					}
				}
				else if(s[2]=='C')
				{
					if(s1[2]=='B')
					{
						cout<<1;
						return 0;
					}
					else
					{
						cout<<0;
					}
				}
				
			}
			else if((s[2]=='D'||s[2]=='F')&&(s1[2]=='D'||s1[2]=='F'))
			{
				cout<<1;
				if(s[2]=='D')
				{
					if(s1[2]=='F')
					{
						cout<<1;
						return 0;
					}
				}
				else if(s[2]=='F')
				{
					if(s1[2]=='D')
					{
						cout<<1;
						return 0;
					}
					else
					{
						cout<<0;
					}
				}
			
			}
			else
			{
				cout<<0<<0;
				return 0;
			 } 
		}
		else
		{
			cout<<0<<0<<0;
			return 0;
			
		}
	}
	else
	{
		cout<<"0000";
		return 0; 
	}
	return 0;
}
