#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	int a1,b1;
	char a2 ,b2;
	freopen("travel.in","r",stdin);
	freopen ("travel.out","w",stdout);
	scanf("%d %d%c %d %d%c",&a,&a1,&a2,&b,&b1,&b2);
	if (a==b)
	{
		cout<<"1";
		if (a1==b1)
		{
			cout<<1;
			if((a2<='C'&&b2<='C')||(a2>='D'&&a2>='D')) 
			{
				cout<<1;
				if(a2<='C')
				{
					if (a2<b2&&(char)(a2+1)==b2)cout<<1;
					else if(a2>b2&&(char)(a2-1)==b2)cout<<1;
					else cout<<0;
				}
				if(a2>'C')
				{
					cout<<1;
				}
			}
			else
			{
				cout<<"00";
			}
			
		}else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	return 0;
}//2026.10.31 08:55:40 稿一，预估得分100，样例全过 
