#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,x1,c2,x2;
	cin>>c1>>c2>>x1>>x2;
	if(c1[0]==x1[0]&&c1[1]==x1[1])cout<<"1";
	else 
	{
		cout<<"0000";
		return 0;
	}
	if(x2[0]==c2[0]&&x2[1]==c2[1])cout<<"1";
	else 
	{
		cout<<"000";
		return 0;
	}
	if((c2[2]>='A'&&c2[2]<='C'&&x2[2]>='A'&&x2[2]<='C')||(c2[2]>='D'&&c2[2]<='E'&&x2[2]>='D'&&x2[2]<='E'))cout<<"1";
	else 
	{
		cout<<"00";
		return 0;
	}
	if(abs((int)c2[2]-(int)x2[2])==1)cout<<1;
	else cout<<0;
	return 0;
}