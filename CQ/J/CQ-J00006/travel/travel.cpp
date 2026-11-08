#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int f(char c){
	if(c=='A'||c=='B'||c=='C')return 1;
	return 0;
}
bool calc(char a,char b){
	if(a>b)swap(a,b);
	if(b-a==1)return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)cout<<1;
	else cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1])cout<<1;
	else cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1]&&f(b[2])==f(d[2]))cout<<1;
	else cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1]&&f(b[2])==f(d[2])&&calc(b[2],d[2]))cout<<1;
	else cout<<0;
	return 0;
}

