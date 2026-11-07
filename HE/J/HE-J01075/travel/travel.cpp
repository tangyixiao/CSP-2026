#include<bits/stdc++.h>
using namespace std;
struct e{
	string a1,a2;
}f[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>f[1].a1>>f[1].a2>>f[2].a1>>f[2].a2;
	if(f[1].a1==f[2].a1) cout<<'1';
	else{
		cout<<"0000";
		return 0;
	} 
	if(f[1].a2[0]+f[1].a2[1]==f[2].a2[0]+f[2].a2[1]) cout<<'1';
	else{
		cout<<"000";
		return 0;
	} 
	if((f[1].a2[2]=='A'&&f[2].a2[2]=='B')||(f[1].a2[2]=='A'&&f[2].a2[2]=='C')||(f[1].a2[2]=='B'&&f[2].a2[2]=='A')||(f[1].a2[2]=='B'&&f[2].a2[2]=='C')||(f[1].a2[2]=='C'&&f[2].a2[2]=='A')||(f[1].a2[2]=='C'&&f[2].a2[2]=='B')||(f[1].a2[2]=='D'&&f[2].a2[2]=='F')||(f[1].a2[2]=='F'&&f[2].a2[2]=='D')) cout<<'1';
	else{
		cout<<"00";
		return 0;
	} 
	if((f[1].a2[2]=='A'&&f[2].a2[2]=='B')||(f[1].a2[2]=='B'&&f[2].a2[2]=='A')||(f[1].a2[2]=='B'&&f[2].a2[2]=='C')||(f[1].a2[2]=='C'&&f[2].a2[2]=='B')||(f[1].a2[2]=='D'&&f[2].a2[2]=='F')||(f[1].a2[2]=='F'&&f[2].a2[2]=='D')) cout<<'1';
	else cout<<'0';
	return 0;
}
