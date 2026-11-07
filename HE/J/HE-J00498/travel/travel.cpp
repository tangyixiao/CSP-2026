#include<bits/stdc++.h>
#define int long long
using namespace std;
string a1,a2,b1,b2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2){
		cout<<1;
		if(b1[0]==b2[0]&&b1[1]==b2[1]){
			cout<<1;
			if(b1[2]=='A'){
				if(b2[2]=='B') cout<<"11";
				if(b2[2]=='C') cout<<"10";
				if(b2[2]=='D'||b2[2]=='F') cout<<"00";
			}
			if(b1[2]=='B'){
				if(b2[2]=='A'||b2[2]=='C') cout<<"11";
				else cout<<"00";
			}
			if(b1[2]=='C'){
				if(b2[2]=='B') cout<<"11";
				if(b2[2]=='A') cout<<"10";
				if(b2[2]=='D'||b2[2]=='F') cout<<"00";
			}
			if(b1[2]=='D'){
				if(b2[2]=='F') cout<<"11";
				else cout<<"00";
			}
			if(b1[2]=='F'){
				if(b2[2]=='D') cout<<"11";
				else cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
