#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	int n1=0,n2=0;
    cin>>c1>>s1>>c2>>s2;
    for(int i=0;i<=c1.size();i++)
    {
    	if(c1[i]!=c2[i])
    	{
    		cout<<"0000";
    		return 0;
		}
		else{
			continue;
		}
	}
	cout<<"1";
	if(s1[2]=='A'||s1[2]=='C'||s1[2]=='B')
	{
		n1=1;
	}
	if(s2[2]=='A'||s2[2]=='C'||s2[2]=='B')
	{
		n2=1;
	}
	for(int i=0;i<s1.size();i++)
	{
		if(i>=0&&i<2)
		{
			if(s1[i]!=s2[i])
			{
				cout<<"000";
				return 0;
			}
			else
			{
				continue;
			}
		}
	}
	cout<<"1";
	if(n1!=n2)
	{
		cout<<"00";
		return 0;
	}
	else
	{
		cout<<"1";
	}
	if(s1[2]+1==s2[2]+0||s1[2]+0==s2[2]+1)
	{
		if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C'))
		{
			cout<<"0"; 
		}
		else
		{
			cout<<"1";
		}
	}
	else{
		cout<<"0";
	}
	return 0;
 } 
