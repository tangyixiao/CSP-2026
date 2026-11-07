#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0),cout.tie(0);
	string s[4];
	cin>>s[1]>>s[2]>>s[3]>>s[4];
	if(s[1][0]==s[3][0]&&s[1][1]==s[3][1]){
		cout<<"1";
		if(s[2][0]==s[4][0]&&s[2][1]==s[4][1]){
			cout<<"1";
			if(s[2][2]>'C'&&s[4][2]>'C'){
				cout<<"11";
			}else if(s[2][2]<='C'&&s[4][2]<='C'){
				cout<<"1";
			//	cout<<s[4][2];
				if(abs((int)s[2][2]-s[4][2])==1) {
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	cout<<'\n';
	return 0;
}