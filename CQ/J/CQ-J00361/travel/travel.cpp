#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool tp(){
	char zt=s1[2],ls=s2[2];
	if(zt=='A'&&ls=='B'){
		return true;
	}
	if(zt=='B'&&(ls=='A'||ls=='C')){
		return true;
	}
	if(zt=='C'&&ls=='B'){
		return true;
	}
	if(zt=='D'&&ls=='F'){
		return true;
	}
	if(zt=='F'&&ls=='D'){
		return true;
	}
	return false;
}
bool tl(){
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='D')){
			return false;
		}
		return true;
	}
	return false;
}	
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}	
	if(tl()==true){
		if(tp()==true){
			cout<<"11";
			return 0;
		}
		cout<<"10";
		return 0;
	}
	cout<<"00";
	return 0;
}
