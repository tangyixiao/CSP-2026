#include<bits/stdc++.h>
using namespace std;
string cq,ch,aq,ah;
bool check(string x,string y)
{
	if(x[0]==y[0]&&x[1]==y[1]) return 1;
	return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cq>>aq>>ch>>ah;
	if(check(cq,ch))
	{
		if(check(aq,ah))
		{
			if((aq[2]<='C'&&aq[2]>='A'&&ah[2]<='C'&&ah[2]>='A')||(aq[2]<='F'&&aq[2]>='E'&&ah[2]<='F'&&ah[2]>='E'))
			{
				if((aq[2]=='D'&ah[2]=='F')||(ah[2]=='D'&aq[2]=='F')||((aq[2]=='A'||aq[2]=='C')&&ah[2]=='B')||((ah[2]=='A'||ah[2]=='C')&&aq[2]=='B')) cout<<"1111";
				else cout<<"1110";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
