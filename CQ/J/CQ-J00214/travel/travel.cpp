#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else cout<<"0";
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)) cout<<"1";
	else cout<<"0";
	if(c1==c2){
		if(s1.substr(0,2)==s2.substr(0,2)){
			int a=s1[2],b=s2[2];
			if(a=='D'||a=='F'){
				if(b=='d'||b=='f') cout<<"1";
				else cout<<"0";
			}
			else{
				if(b=='A'||b=='B'||b=='C') cout<<"1";
				else cout<<"0";
			}
		}
		else cout<<"0";
	}
	else cout<<"0";
	if(c1==c2){
		if(s1.substr(0,2)==s2.substr(0,2)){
			int a=s1[2],b=s2[2];
			if(a=='D'||a=='F'){
				if(b=='D'||b=='F') cout<<"1";
				else cout<<"0";
			}
			else{
				if(a=='A'&&b=='B') cout<<"1";
				else if(a=='B'&&b=='A') cout<<"1";
				else if(a=='B'&&b=='C') cout<<"1";
				else if(a=='C'&&b=='B') cout<<"1";
				else cout<<"0";
			}
		}
		else cout<<"0";
	}
	else cout<<"0";	
	return 0;
}
