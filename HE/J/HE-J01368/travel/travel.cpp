#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int r[4],x[4];
char out[5]; 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++)
	{
		r[i]=s1[i]-'0';
		x[i]=s2[i]-'0';
	} 
	r[2]=s1[2];
	x[2]=s2[2];
	if(c1==c2)
	{
		if(r[0]==x[0]&&r[1]==x[1])
		{
			if(r[2]<='C'&&x[2]<='C')
			{
				if(r[2]=='B'||x[2]=='B')
				{
					cout<<"1111";
				}
				else
				{
					cout<<"1110";
				}
			}
			else if(r[2]>='D'&&x[2]>='D')
			{
				cout<<"1111";
			}
			else
			{
				cout<<"1100";
			}
		}
		else
		{
			cout<<"1000";
		}
	}
	else
	{
		cout<<"0000";
	}
	
	return 0;
}
