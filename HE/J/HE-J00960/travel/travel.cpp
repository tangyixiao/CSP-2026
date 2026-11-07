#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2;
	string b1,b2;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2)cout<<"1";
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b1[0]==b2[0]&&b1[1]==b2[1])cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if((b1[2]<='c'&&b2[2]<='c')||(b1[2]>'c'&&b2[2]>'c'))cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(abs(b1[2]-b2[2])==1)cout<<"1";
	else{
		cout<<"0";
	}
	return 0;
}
