#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
string al,ac,bl,bc;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>al>>ac>>bl>>bc;
	if(al==bl)cout<<1;
	else
	{
		cout<<"0000";
		return 0;
	}
	if(bc[0]==ac[0]&&ac[1]==bc[1])cout<<1;
	else 
	{
		cout<<"000";
		return 0;
	}
	if(ac[2]<='C')
	{
		if(bc[2]<='C')
		{
			cout<<1;
			if(abs(ac[2]-bc[2])==1)cout<<1;
			else cout<<0;
		}
		else cout<<"00";
	}
	else
	{
		if(bc[2]>'C')
		{
			cout<<1;
			if(abs(ac[2]-bc[2])==2)cout<<1;
			else cout<<0;
		}
		else cout<<"00";
	}
	fclose(stdin);
	return 0;
}
