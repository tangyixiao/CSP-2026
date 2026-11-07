#include<bits/stdc++.h>
using namespace std;
string check(bool bb,char a,char b){
	if(!bb)return "00";
	if(((a=='A'||a=='B'||a=='C')&&(b=='A'||b=='B'||b=='C'))||((a=='D'||a=='F')&&(b=='D'||b=='F'))){
		if((a=='A'||a=='B'||a=='C')&&abs(a-b)==1)return "11";
		else if(a=='D'||a=='F')return "11";
		else return "10";
	}else return "00";
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	string c1,s1,c2,s2;cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)return cout<<"0000",0;
	else{
		bool b=(s1[0]==s2[0]&&s1[1]==s2[1]);
		cout<<"1"<<b<<check(b,s1[2],s2[2]);
	}
	return 0;
}