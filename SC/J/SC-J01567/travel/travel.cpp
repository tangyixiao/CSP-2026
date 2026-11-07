#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool flag2=true,flag3=true,flag4=false;
int main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) {
		cout<<1;
	} else {
		cout<<"0000";
		return 0;
	}
	for(int i=0; i<=s1.size()-2; ++i) {
		if(s1[i]!=s2[i]) {
			flag2=false;
		}
	} 
	if(flag2==false) {
		cout<<"000";
		return 0;
	} else {
		cout<<1;
	}
	if((s1[2]=='A'&&s2[2]=='D')||(s1[2]=='A'&&s2[2]=='F')) {
		flag3=false;
	}
	if((s1[2]=='B'&&s2[2]=='D')||(s1[2]=='B'&&s2[2]=='F')) {
		flag3=false;
	}
	if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='C'&&s2[2]=='F')) {
		flag3=false;
	}
	if((s2[2]=='A'&&s1[2]=='D')||(s2[2]=='A'&&s1[2]=='F')) {
		flag3=false;
	}
	if((s2[2]=='B'&&s1[2]=='D')||(s2[2]=='B'&&s1[2]=='F')) {
		flag3=false;
	}
	if((s2[2]=='C'&&s1[2]=='D')||(s2[2]=='C'&&s1[2]=='F')) {
		flag3=false;
	}
	if(flag3==false) {
		cout<<"00";
		return 0;
	} else {
		cout<<1;
	}
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='D'&&s2[2]=='F')) {
		flag4=true;
	}
	if((s2[2]=='A'&&s1[2]=='B')||(s2[2]=='B'&&s1[2]=='C')||(s2[2]=='D'&&s1[2]=='F')) {
		flag4=true;
	}
	if(flag4==true) {
		cout<<1;
	} else {
		cout<<0;
	}
	return 0;
}