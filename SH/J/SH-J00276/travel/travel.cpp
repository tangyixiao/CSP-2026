#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

map <char,int> mp;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	mp['A']=1;
	mp['B']=1;
	mp['C']=1;
	mp['D']=2;
	mp['F']=2;
	
	int a,c;
	string b,d;
	cin >> a >> b >> c >> d;
	
	if (a!=c)
	{
		cout << "0000";
	}
	else
	{
		cout << "1";
		
		if ((b[0]==d[0]) && (b[1]==d[1]))
		{
			cout << "1";
			
			if (mp[b[2]]==mp[d[2]])
			{
				cout << "1";
				
				if ((b[2]=='A' && d[2]=='B') || (b[2]=='B' && d[2]=='C') || (b[2]=='D' && d[2]=='F'))
				{
					cout << "1";
				}
				else
				{
					cout << "0";
				}
			}
			else
			{
				cout << "00";
			}
		}
		else
		{
			cout << "000";
		}
	}
	return 0; 
} 

/*
密码：Trick||Treat!
我常常追忆过去。
之前来cyez上课，走楼梯的时间很短。
今天却格外长。
鼠标也不咋地。 

luogu: @chillchill ,uid=765219 

100+68+60+50=278
*/ 
