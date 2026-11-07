#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<1;
		int x,y;
		x=(b[0]-'0')*10+(b[1]-'0');
		y=(d[0]-'0')*10+(d[1]-'0');
		if(x==y)
		{
			cout<<1;
			char s,t;
			s=b[2];
			t=d[2];
			if((s=='A'||s=='B'||s=='C')&&(t=='A'||t=='B'||t=='C'))
			{
				cout<<1;
				if(abs(s-t)==1)
				{
					cout<<1;
				}
				else cout<<0;
			}
			else if((s=='D'||s=='E')&&((t=='D'||t=='E')))
			{
				cout<<1;
				if(abs(s-t)==1)
				{
					cout<<1;
				}
				else cout<<0;
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
