#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >>c1>>s1>>c2>>s2;
	string ps1,ps2;
	ps1=s1[0]+s1[1];
	ps2=s2[0]+s2[1];
	char a=s1[2];
	char b=s2[2];
	if(c1!=c2) cout<<"0000";
	else if(ps1!=ps2) cout<<"1000";
	else if(!('A'<=a&&'C'>=a&&'A'<=b&&'C'>=b)||((a=='D'||a=='F')&&(b=='D'||b=='F')))cout<<"1100";
	else if(abs(a-b)!=1) cout<<"1110";
	else cout<<"1111";
	return 0;
 } 