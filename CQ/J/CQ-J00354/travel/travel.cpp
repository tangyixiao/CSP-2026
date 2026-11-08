#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool check1(string a1,string a2){//≥µœ·”ÎÕ¨≈≈ 
	if(a1[0]==a2[0] && a1[1]==a2[1])return 1;
	else return 0;
}
bool check2(char t1,char t2){
	bool flag1=0,flag2=0;
	if(t1<='C')flag1=1;
	else flag1=0;
	if(t2<='C')flag2=1;
	else flag2=0;
	if(flag1==flag2)return 1;
	else return 0;
} 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(check1(c1,c2)){
		cout<<'1';
	}
	else {
		cout<<"0000";
		return 0;
	}
	string c3="",c4="";
	c3+=s1[0];
	c3+=s1[1];
	c4+=s2[0];
	c4+=s2[1];
	if(check1(c3,c4)){
		cout<<'1';
	}
	else {
		cout<<"000";
		return 0;
	}
	char w1=s1[2],w2=s2[2];
	if(check2(w1,w2))cout<<'1';
	else {
		cout<<"00";
		return 0;
	}
	if(w1=='F')w1='E';
	if(w2=='F')w2='E';
	if(abs(w1-w2)==1){
		cout<<'1';
	}
	else cout<<'0';
	return 0;
}
