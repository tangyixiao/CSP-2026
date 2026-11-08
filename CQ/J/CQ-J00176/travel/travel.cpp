#include<bits/stdc++.h>
using namespace std;
string s[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>s[1]>>s[2]>>s[3]>>s[4];
	if(s[1]!=s[3]){cout<<"0000";return 0;} 
	cout<<1;
	if(s[2][0]!=s[4][0]||s[2][1]!=s[4][1]){cout<<"000";return 0;}
	cout<<1;
	if(!(s[2][2]<='C'&&s[4][2]<='C'||s[2][2]>='D'&&s[4][2]>='D')){cout<<"00";return 0;}
	cout<<1;
	if(abs(s[2][2]-s[4][2])!=1)cout<<0;
	else cout<<1;
	return 0;
} 
