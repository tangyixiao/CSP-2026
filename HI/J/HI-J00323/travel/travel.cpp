#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string zuo1,zuo2;
	cin>>a>>zuo1;
	cin>>b>>zuo2;
	if(a==b)
	{
		cout<<1;
		if(a==b && zuo1[0]==zuo2[0] && zuo1[1]==zuo2[1])
		{
			cout<<1;
			int zh1,zh2;
			zh1=zuo1[2]-'A';
			zh2=zuo2[2]-'A';
			if((zh1>2 && zh2>2) || (zh1<3 && zh2<3))
			{
				cout<<1;
				if(abs(zh1-zh2)==1)
				cout<<1;
				else
				cout<<0;
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
	cout<<"0000";
	return 0;
}
