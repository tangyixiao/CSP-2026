#include<bits/stdc++.h>
#define AC return 0
using namespace std;
bool jjb(string s1,string s2){
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')return true;
		else return false;
	}if(s1[2]=='D'||s1[2]=='F'){
		if(s2[2]=='D'||s2[2]=='F')return true;
		else return false;
	}
}bool jjb2(string s1,string s2){
	if(s1[2]=='D'||s1[2]=='F')return true;
	if(s1[2]=='B'||s2[2]=='B')return true;
	return false;
}int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	string c1,s1,c2,s2;cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)return cout<<"0000",0;
	cout<<"1";
	if(!(s1[0]==s2[0]&&s1[1]==s2[1]))return cout<<"000",0;
	cout<<"1";
	if(!jjb(s1,s2))return cout<<"00",0;
	cout<<"1";
	if(jjb2(s1,s2))cout<<"1";
	else cout<<"0";
	AC;
}