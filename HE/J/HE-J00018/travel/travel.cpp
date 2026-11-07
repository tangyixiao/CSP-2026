#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	else cout<<"1";
	string numa=b.substr(0,2);
	char sa=b[2];
	string numb=d.substr(0,2);
	char sb=d[2];
	if(numa==numb)
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if((sa<='C'&&sb<='C')||(sa>'C'&&sb>'C'))
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(sa-sb<2)
	{
		cout<<"1";
	}
	else cout<<"0";
	return 0;
}
