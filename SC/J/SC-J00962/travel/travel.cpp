#include <bits/stdc++.h> 
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2;
	int c1,c2;
	cin>>c1>>s1>>c2>>s2;
	int p1=(s1[0]-'0')*10+s1[1]-'0',p2=(s2[0]-'0')*10+s2[1]-'0';
	char q1=s1[2],q2=s2[2];
	if(c1==c2)
	{
		cout<<1;
		if(p1==p2)
		{
			cout<<1;
			if(q1>'C')
			{
				if(q2>'C')
				{
					cout<<1;
					if(abs(q1-q2)==1)
						cout<<1;
					else
						cout<<0;	
				} 
				else
				{
					cout<<"00";
				}
			}
			else
			{
				if(q2>'C')
				{
					cout<<"00";
				} 
				else
				{
					cout<<1;
					if(abs(q1-q2)==1)
						cout<<1;
					else
						cout<<0;
				}
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}