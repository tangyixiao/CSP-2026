#include<bits/stdc++.h>
using namespace std;
int f(char x,char y){
	if(x=='D'&&y=='F')return 1;
	if(x=='A'&&y=='B')return 1;
	if(x=='B'&&y=='C')return 1;
	return 0;
}
int main(){
	freopen("travel.in","w",stdout);
	freopen("travel.out","r",stdin);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int cnt=0;
	if(c1==c2){
		cout<<1;
		cnt++;
	}
	else {
		cout<<0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
		cnt++;
	}
	else {
		cout<<0;
	}
	if(f(s1[2],s2[2])){
		cout<<1;
		cnt++;
	}
	else {
		cout<<0;
	}
	if(cnt==3)cout<<1;
	else cout<<0;
	return 0;
}
