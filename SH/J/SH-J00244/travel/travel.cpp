#include<bits/stdc++.h>
using namespace std;
int main(){
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
			char s=b[2],t=d[2];
			if((s>='A'&&s<='C'&&t>='A'&&t<='C')||(s>='D'&&s<='F'&&t>='D'&&t<='F'))
			{
				cout<<"1";
				if((s=='A'&&t=='B')||(s=='B'&&t=='C')||(s=='D'&&t=='F'))
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
