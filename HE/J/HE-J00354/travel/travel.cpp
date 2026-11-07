#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
bool check1(char a,char b){
	if(a<='C'&&b<='C')return true;
	if(a>='D'&&b>='D')return true;
	return false;
}
bool check2(char a,char b){
	if(a==b+1||b==a+1){
		if((a=='C'&&b=='D')||(b=='C'&&a=='D'))return false;
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3)cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(s1==s3&&s2[1]==s4[1]&&s2[0]==s4[0])cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(s1==s3&&s2[1]==s4[1]&&s2[0]==s4[0]&&check1(s2[2],s4[2]))cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(s1==s3&&s2[1]==s4[1]&&s2[0]==s4[0]&&check1(s2[2],s4[2])&&check2(s2[2],s4[2]))cout<<"1";
	else cout<<"0";
	return 0;
} 
