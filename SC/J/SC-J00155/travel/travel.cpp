#include<bits/stdc++.h>
using namespace std;
int x1,x2,y1,y2;
char c1,c2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%d",&x1,&y1);
	cin>>c1; 
	scanf("%d%d",&x2,&y2);
	cin>>c2; 
	if(c1=='F')
	{
		c1='E';
	}
	if(c2=='F')
	{
		c2='E';
	}
	if(x1==x2)
	{
		cout<<1;
		if(y1==y2)
		{
			cout<<1;
			if(((c1>='A'&&c1<='C')&&(c2>='A'&&c2<='C'))||((c1>='D'&&c1<='E')&&(c2>='D'&&c2<='E')))
			{
				cout<<1;
				if((c1+1 == c2)||(c2+1 ==c1))
				{
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else
			{
				cout<<"00";
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