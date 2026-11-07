#include<bits/stdc++.h>
#define int long long
using namespace std;
string s1,s,t1,t;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s>>t1>>t;
	if(s1==t1){
		cout<<1;
		int k=(s[0]-'0')*10+s[1]-'0';
	int y=(t[0]-'0')*10+t[1]-'0';
	if(k==y) {
		cout<<1;
		if(s[2]<='E'&&s[2]>='D'&&t[2]<='E'&&t[2]>='D'||s[2]<='C'&&s[2]>='A'&&t[2]>='A'&&t[2]<='C'){
			cout<<1;
			if(abs(s[2]-t[2])==1){
				cout<<1;
			}
			else {
				cout<<0;
			}
		}
		else {
			cout<<"00";
		}
	}
	else {
		cout<<"000";
	}
	}else {
		cout<<"0000";
	}
	return 0;
}