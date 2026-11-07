#include <bits/stdc++.h>
using namespace std;
int axiang,bxiang;
string ahao,bhao;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>axiang>>ahao>>bxiang>>bhao;
	if(axiang==bxiang)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(ahao[0]==bhao[0] && ahao[1]==bhao[1])
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if((ahao[2]=='A' || ahao[2]=='B' || ahao[2]=='C') && (bhao[2]=='A' || bhao[2]=='B' || bhao[2]=='C'))
	{
		cout<<"1";
	}
	else if((ahao[2]=='D' || ahao[2]=='F') && (bhao[2]=='D' || bhao[2]=='F'))
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(ahao[2]=='A' && bhao[2]=='B')
	{
		cout<<"1";
	}
	else if(ahao[2]=='B' && bhao[2]=='A')
	{
		cout<<"1";
	}
	else if(ahao[2]=='B' && bhao[2]=='C')
	{
		cout<<"1";
	}
	else if(ahao[2]=='C' && bhao[2]=='B')
	{
		cout<<"1";
	}
	else if(ahao[2]=='D' && bhao[2]=='F')
	{
		cout<<"1";
	}
	else if(ahao[2]=='F' && bhao[2]=='D')
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}

