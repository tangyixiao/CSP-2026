#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c) 
	{
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1]) 
		{
			cout<<"1";
			if((((int)b[2]>=65&&(int)b[2]<=67)&&(((int)d[2]>=65&&(int)d[2]<=67)))||(((int)b[2]>=68&&(int)b[2]<=69)&&(((int)d[2]>=68&&(int)d[2]<=69))))
			{
				cout<<"1";
				if((int)b[2]-(int)d[2]==1||(int)d[2]-(int)b[2]==1) 
				{
					cout<<"1";
				} 
				else 
				{
					cout<<"0";
					return 0;
				}
			} 
			else 
			{
				cout<<"00";
				return 0;
			}
		} 
		else 
		{
			cout<<"000";
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
