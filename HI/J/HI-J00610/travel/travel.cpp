#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ca,sa,cb,sb;
	int ta,tb;
	cin>>ca>>sa>>cb>>sb;
	if(ca[0]==cb[0]&&ca[1]==cb[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(sa[1]==sb[1]&&ca[0]==cb[0]&&ca[1]==cb[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(sa[2]=='A'||sa[2]=='B'||sa[2]=='C')
	{
		ta=1;
	}
	else
	{
		ta=0;
	}
	if(sb[2]=='A'||sb[2]=='B'||sb[2]=='C')
	{
		tb=1;
	}
	else
	{
		tb=0;
	}
	if(ta==tb&&sa[1]==sb[1]&&ca[0]==cb[0]&&ca[1]==cb[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0; 
	}
	if((sa[2]-sb[2]==1||sa[2]-sb[2]==-1)&&ta==tb&&ca[0]==cb[0]&&ca[1]==cb[1]&&sa[1]==sb[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}


}
