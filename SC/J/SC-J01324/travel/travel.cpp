#include<iostream>
#include<cstdio>
using namespace std;
string ca1,ca2,s123,s321;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>ca1>>s123>>ca2>>s321;
	if(ca1[0]!=ca2[0]||ca1[1]!=ca2[1])cout<<"0000";
	else if(s123[0]!=s321[0]||s123[1]!=s321[1])cout<<"1000";
	else if(s123[2]=='D'&&s321[2]=='F')cout<<"1111";
	else if(s123[2]=='F'&&s321[2]=='D')cout<<"1111";
	else if(s123[2]=='A'&&s321[2]=='B')cout<<"1111";
	else if(s123[2]=='B'&&s321[2]=='A')cout<<"1111";
	else if(s123[2]=='B'&&s321[2]=='C')cout<<"1111";
	else if(s123[2]=='C'&&s321[2]=='B')cout<<"1111";
	else if(s123[2]=='A'&&s321[2]=='C')cout<<"1110";
	else if(s123[2]=='C'&&s321[2]=='A')cout<<"1110";
	else cout<<"1100";
	return 0;
}