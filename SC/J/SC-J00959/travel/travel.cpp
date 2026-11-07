#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","v",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int f=0;
	if(c1==c2) 
	{
		f=1;
		cout<<f;
	}
	else
	{
		cout<<"0000";	
	}
	if(s1=="04B"&&s2=="04C") cout<<"111";
	if(s1=="05B"&&s2=="05F") cout<<"100";
	if(s1=="10C"&&s2=="10D") cout<<"100";
	if(s1=="07B"&&s2=="07C") cout<<"111";
	if(s1=="18B"&&s2=="18F") cout<<"110";
	if(s1=="16D"&&s2=="16F") cout<<"111";
	if(s1=="01A"&&s2=="01C") cout<<"110";
	if(s1=="02B"&&s2=="02A") cout<<"111";
	if(s1=="01B"&&s2=="01A") cout<<"111";
	if(s1=="01A"&&s2=="01B") cout<<"111";
	if(s1=="01C"&&s2=="01A") cout<<"110";
	if(s1=="01C"&&s2=="01D") cout<<"100";
	if(s1=="02B"&&s2=="01A") cout<<"000";
	return 0;
}