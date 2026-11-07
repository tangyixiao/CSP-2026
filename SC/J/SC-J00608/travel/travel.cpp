#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

string s1,s2,z1,z2;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>z1>>z2;
	if (s1==z1) {
		cout<<1;
	}
	else {
		cout<<"0000";
		return 0;
	}
	if (s2.substr(0,2)==z2.substr(0,2)) {
		cout<<1;
	}
	else {
		cout<<"000";
		return 0;
	}
	if (s2[2]-'A'<3) {
		if (z2[2]-'A'<3) {
			cout<<1;
		}
		else {
			cout<<"00";
			return 0;
		}
	}
	else {
		if (z2[2]-'A'>2) {
			cout<<1;
		}
		else {
			cout<<"00";
			return 0;
		}
	}
	if (abs(s2[2]-z2[2])<=1) {
		cout<<1;
	}
	else {
		cout<<0;
	}
	return 0;
}
