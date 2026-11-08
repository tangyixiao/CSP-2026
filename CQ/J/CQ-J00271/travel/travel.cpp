#include<bits/stdc++.h>
using namespace std;
string x,y;
int s,t;
char a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>s>>a>>y>>t>>b;
	if(x==y){
		cout<<1;
		if(s==t){
			cout<<1;
			if((a=='A'||a=='B'||a=='C')&&(b=='A'||b=='B'||b=='C')||(a=='D'||b=='F')&&(a=='D'||b=='F')){
				cout<<1;
				if((a=='A'&&b=='B')||(a=='B'&&b=='C')||(a=='B'&&b=='A')||(a=='C'&&b=='B')||(a=='D'&&b=='F')||(a=='F'&&b=='D'))cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
