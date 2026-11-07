#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c>>s>>cc>>ss;
	if(c!=cc) cout<<"0000";
	else if(s[0]!=ss[0]||s[1]!=ss[1]) cout<<"1000";
	else{
		char a=s[2],b=ss[2];
		if(a>='A'&&a<='C'&&b>='A'&&b<='C'){
			if((a=='A'&&b=='C')||(a=='C'&&b=='A')) cout<<"1110";
			else cout<<"1111";
		}else if((a=='D'&&b=='F')||(a=='F'&&b=='D')) cout<<"1111";
		else cout<<"1100";
	}
	return 0;
} 
