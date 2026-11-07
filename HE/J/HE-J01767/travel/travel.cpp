#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	char a=s1[2],b=s2[2];
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(a<='C'&&b<='C'||a>='D'&&b>='D') cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(a+1==int(b) || b+1==int(a)) cout<<1;
	else if(a=='D'&&b=='F'||b=='D'&&a=='F') cout<<1;
	else cout<<0;
	return 0;
}
