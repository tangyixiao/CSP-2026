#include<bits/stdc++.h>
using namespace std;
int r,x;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	r=(c1[0]-'0')*10+(c1[1]-'0');
	x=(c2[0]-'0')*10+(c2[1]-'0');
	if(r!=x) cout<<"0000";
	else if(r==x && (s1[0]!=s2[0] || s1[1]!=s2[1])) cout<<"1000";
	else if(r==x && s1[0]==s2[0] && s1[1]==s2[1]){
		cout<<"11";
		if(s1[2]=='A'){
			if(s2[2]=='B' || s2[2]=='C') cout<<"1";
			if(s2[2]=='B') cout<<"1";
			else if(s2[2]=='C') cout<<'0';
			if(s2[2]=='D' || s2[2]=='F') cout<<"00";
		}else if(s1[2]=='B'){
			if(s2[2]=='A' || s2[2]=='C') cout<<"11";
			else cout<<"00";
		}else if(s1[2]=='C'){
			if(s2[2]=='A' || s2[2]=='B') cout<<"1";
			if(s2[2]=='B') cout<<"1";
			else if(s2[2]=='A') cout<<'0';
			if(s2[2]=='D' || s2[2]=='F') cout<<"00";
		}else if(s1[2]=='D'){
			if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C') cout<<"00";
			if(s2[2]=='F') cout<<"11";
		}else{
			if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C') cout<<"00";
			if(s2[2]=='D') cout<<"11";
		}
	}
	return 0;
}