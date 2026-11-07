#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	//p排  l列 
	char p,pp,p2,pp2,zm,zm2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else 
	{
		cout<<"0000";
		return 0;
	}
	//R 
	p=s1[0];
	pp=s1[1];
	zm=s1[2];
	//X
	p2=s2[0];
	pp2=s2[1];
	zm2=s2[2];
	if(p==p2&&pp==pp2) cout<<"1";
	else 
	{
		cout<<"000";
		return 0;
	}
	if     (zm=='F'&&zm2=='D') cout<<"11";
	else if(zm=='D'&&zm2=='F') cout<<"11";
	else if(zm=='A'&&zm2=='B') cout<<"11"; 
	else if(zm=='B'&&zm2=='A') cout<<"11"; 
	else if(zm=='A'&&zm2=='C') cout<<"10"; 
	else if(zm=='C'&&zm2=='A') cout<<"10";
	else if(zm=='B'&&zm2=='C') cout<<"11";
	else if(zm=='C'&&zm2=='B') cout<<"11";  
	else                       cout<<"00"; 
	return 0;
}