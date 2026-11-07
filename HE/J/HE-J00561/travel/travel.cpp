#include<bits/stdc++.h>
using namespace std;
string c[5],s[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c[1]>>s[1]>>c[2]>>s[2];
	if(c[1]==c[2])cout<<1;
	else cout<<0;
	if((c[1]==c[2])&&(s[1][1]==s[2][1]))cout<<1;
	else cout<<0;
	if((c[1]==c[2])&&(s[1][1]==s[2][1])&&((s[1][2]>='A'&&s[1][2]<='C'&&s[2][2]>='A'&&s[2][2]<='C')||(s[1][2]>='D'&&s[1][2]<='F'&&s[2][2]>='D'&&s[2][2]<='F')))cout<<1;
	else cout<<0;
	if((c[1]==c[2])&&(s[1][1]==s[2][1])&&((s[1][2]>='A'&&s[1][2]<='C'&&s[2][2]>='A'&&s[2][2]<='C')||(s[1][2]>='D'&&s[1][2]<='F'&&s[2][2]>='D'&&s[2][2]<='F'))&&((s[1][2]+1==s[2][2])||(s[1][2]=='D'&&s[2][2]=='F')||(s[2][2]=='D'&&s[1][2]=='F')))cout<<1;
	else cout<<0;
	return 0;
}
