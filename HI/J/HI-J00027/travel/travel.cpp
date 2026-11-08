#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int e,f;
char g,h;
bool ff(char g,char h){
	if(g=='A'&&h=='B')return 1;
	if(g=='B'&&h=='A')return 1;
	if(g=='B'&&h=='C')return 1;
	if(g=='C'&&h=='B')return 1;
	if(g=='D'&&h=='F')return 1;
	if(g=='F'&&h=='D')return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>d;
	e=(b[0]-'0')*10+(b[1]-'0');
	f=(d[0]-'0')*10+(d[1]-'0');
	g=b[2],h=d[2];
	if(a!=c)cout <<"0000";
	else if(e!=f)cout <<"1000";
	else if(!((g<='C'&&h<='C')||(g>'C'&&h>'C')))cout <<"1100";
	else if(!ff(g,h))cout <<"1110";
	else cout <<"1111";
	return 0;
}
