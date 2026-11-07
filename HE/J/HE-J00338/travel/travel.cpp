#include<iostream>
#include<cstdio>
using namespace std;
char tj[20];
bool pd=false;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=10;i++)cin>>tj[i];
	if(tj[1]!=tj[6]||tj[2]!=tj[7])cout<<"0000";
	else
	{
		cout<<1;
		if(tj[3]!=tj[8]||tj[4]!=tj[9])cout<<"000";
		else
		{
			cout<<1;
			if(tj[5]>='D'^tj[10]>='D')cout<<"00";
			else
			{
				cout<<1;
				if(tj[5]>='D'&&tj[10]>='D')cout<<1;
				else
				{
					if((tj[5]=='A'&&tj[10]=='C')||(tj[5]=='C'&&tj[10]=='A'))cout<<0;
					else cout<<1;
				}
			}
		}
	}
}
