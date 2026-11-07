#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool can(int a,int b)
{
	if (a<=2)
	{
		if (b<=2)return 1;
		else return 0;
	}
	if (a>=3)
	{
		if (b>=3)return 1;
		else return 0;
	}
	
}
int res(char t)
{
	if (t == 'A')return 0;
	else if (t=='B')return 1;
	else if (t=='C')return 2;
	else if (t=='D')return 3;
	else return 4;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	int aa,ba,ca,da;
	aa = (char(a[0])-'0')*10+(char(a[1])-'0');
	ba = (char(b[0])-'0')*10+(char(b[1])-'0');
	ca = (char(c[0])-'0')*10+(char(c[1])-'0');
	da = (char(d[0])-'0')*10+(char(d[1])-'0');
	if (aa == ca)//同一节车厢 
	{
		cout<<"1";
		if (ba == da)//同一排 
		{
			cout<<"1";
			int ka=0,kb=0;
			ka=res(b[2]);
			kb=res(d[2]);
			if (can(ka,kb))
			{
				cout<<"1";
				if (abs(ka-kb)==1)
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
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
