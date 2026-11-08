#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool check(char a,char b)
{
	if ((a=='A'&&(b=='B'||b=='C'))||(a=='B'&&(b=='A'||b=='C'))||(a=='C'&&(b=='A'||b=='B')))
	return 1;
	if ((a=='D'&&b=='F')||(a=='F'&&b=='D'))
	return 1;
	return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2)
	cout<<"1";
	else cout<<"0";
	if (c1==c2&&(s1[0]+s1[1]==s2[0]+s2[1]))
	cout<<"1";
	else cout<<"0";
	if (c1==c2&&(s1[0]+s1[1]==s2[0]+s2[1])&&check(s1[2],s2[2]))
	cout<<"1";
	else cout<<"0";
	if (c1==c2&&(s1[0]+s1[1]==s2[0]+s2[1])&&check(s1[2],s2[2])&&abs(int(s1[2]-s2[2]))==1) cout<<"1";
	else cout<<"0";
	return 0;
}
//Ê±¼ä¸´ÔÓ¶È£ºO(1); 
