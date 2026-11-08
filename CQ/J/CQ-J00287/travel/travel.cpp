#include<bits/stdc++.h>
using namespace std;
string s1,s2;
string c1,c2;
bool b;
int pd(char c){
	if(c=='A'||c=='B'||c=='C') return 1;
	else return 2;
}
bool ck(char a,char b){
	if(a=='A'&&b=='B') return true;
	if(a=='B'&&b=='C') return true;
	if(a=='D'&&b=='F') return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	b=true;
	cin>>s1>>s2>>c1>>c2;
	char op1=s2[2],op2=c2[2];
	if(s1==c1) cout<<1;
	else cout<<0,b=false;
	if(s2.substr(0,2)==c2.substr(0,2)&&b) cout<<1;
	else cout<<0,b=false;
	if(pd(op1)==pd(op2)&&b) cout<<1;
	else cout<<0,b=false;
	if(ck(op1,op2)||ck(op2,op1)&&b) cout<<1;
	else cout<<0;
	return 0;
}
