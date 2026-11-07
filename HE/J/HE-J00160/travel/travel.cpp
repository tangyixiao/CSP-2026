#include<bits/stdc++.h>
#define int long long
using namespace std;
string s1,c1,s2,c2;
bool flag,ok;
int32_t main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) {
		cout<<1;
	} else {
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) {
		flag=true;
		cout<<1;
	} else cout<<0;
	if(flag) {
		if(s1[2]=='A') {
			if(s2[2]=='B') {
				cout<<11;
			} else if(s2[2]=='C') {
				cout<<10;
			} else if(s2[2]=='D'||s2[2]=='F') {
				cout<<"00";
			}
		} else if(s1[2]=='B') {
			if(s2[2]=='A'||s2[2]=='C') {
				cout<<11;
			} else if(s2[2]=='D'||s2[2]=='F') {
				cout<<"00";
			}
		} else if(s1[2]=='C') {
			if(s2[2]=='B') {
				cout<<11;
			} else if(s2[2]=='A') {
				cout<<10;
			} else if(s2[2]=='D'||s2[2]=='F') {
				cout<<"00";
			}
		} else if(s1[2]=='D') {
			if(s2[2]=='E') {
				cout<<11;
			} else {
				cout<<"00";
			}
		}
	} else {
		cout<<"00";
	}
	return 0;
}
