#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string c1,c2,s1,s2;
    cin>>c1>>s1>>c2>>s2;
    int p1,p2;
    p1=(s1[0]-'0')*10+s1[1]-'0';
    p2=(s2[0]-'0')*10+s2[1]-'0';
    char op1=s1[2],op2=s2[2];
    if(c1==c2)
	{
		cout<<1;
		if(p1==p2)
		{
			cout<<1;
			if(op1=='F'||op1=='D')
			{
				if(op2=='F'||op2=='D')
				{
					cout<<1<<1;
				}
				else
				{
					cout<<0<<0;
				}
			}
			else 
			{
				if(op2=='A'||op2=='B'||op2=='C')
				{
					cout<<1;
					if(op1=='B'||op2=='B')
					{
						cout<<1;
					}
					else
					{
						cout<<0;
					}
				}
				else
				{
					cout<<0<<0;
				}
			}
		}
		else
		{
			cout<<0<<0<<0; 
		}
	}
	else
	{
		cout<<0<<0<<0<<0; 
	}
	return 0;
} 
