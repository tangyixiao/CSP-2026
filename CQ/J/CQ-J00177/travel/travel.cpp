#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in ","r",stdin);
    freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	long long a,b;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			cout<<"1";
			a=s1[2];
			b=s2[2];
			if(((a>=65&&a<=67)&&(b>=65&&b<=67))||(a>=68&&a<=69)&&(b>=68&&b<=69))
			{
				cout<<"1";
				if(a==b-1||a==b+1)
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
