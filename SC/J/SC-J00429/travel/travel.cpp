#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	string s="ABCDF";
	if(c1==c2)  cout<<"1";
	else {
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1])  cout<<"1";
	else {
		cout<<"000";
		return 0;
	}
	if(s1[2]==s[0]){
		if(s2[2]==s[1]) cout<<"11";
		else if(s2[2]==s[2]) cout<<"10";
		else cout<<"00";
	}
	else if(s1[2]==s[1]){
		if(s2[2]==s[0]) cout<<"11";
		else if(s2[2]==s[2]) cout<<"11";
		else cout<<"00";
	}
	else if(s1[2]==s[2]){
		if(s2[2]==s[0]) cout<<"10";
		else if(s2[2]==s[1]) cout<<"11";
		else cout<<"00";
	}
	else if(s1[2]==s[3]){
		if(s2[2]==s[4]) cout<<"11";
		else cout<<"00";
	}
	else if(s1[2]==s[4]){
		if(s2[2]==s[3]) cout<<"11";
		else cout<<"00";
	}
	
	return 0;
} 