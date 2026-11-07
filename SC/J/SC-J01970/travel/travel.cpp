#include<bits/stdc++.h>//travel
using namespace std;
int a,b,c,d,e,f,g,h;
string xx1,xx2,yy1,yy2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//ios::sync_with_atdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>xx1>>xx2>>yy1>>yy2;
	if((xx1[0]==yy1[0] && xx1[1]==yy1[1]))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	if((xx1[0]==yy1[0] && xx1[1]==yy1[1]) && (xx2[0]==yy2[0] && xx2[1]==yy2[1]))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	if('A'<=xx2[2] && xx2[2]<='C')
	{
		a++;
	}
	if('A'<=yy2[2] && yy2[2]<='C')
	{
		a++;
	}
	if((xx1[0]==yy1[0] && xx1[1]==yy1[1]) && (xx2[0]==yy2[0] && xx2[1]==yy2[1]) && (a==2 || a==0))
	{
		cout<<"1";
		if(a==0)
		{
			if((xx2[2]=='D' && yy2[2]=='F') || (xx2[2]=='F' && yy2[2]=='D'))
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
			if((xx2[2]=='A' && yy2[2]=='B') || (xx2[2]=='B' && yy2[2]=='A') || (xx2[2]=='B' && yy2[2]=='C') || (xx2[2]=='C' && yy2[2]=='B'))
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
	}
	else
	{
		cout<<"00";
	}
	
	return 0;
}
