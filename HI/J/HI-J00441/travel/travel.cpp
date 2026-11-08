#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
string res;

bool check1() {
	if(s2[2]=='A') {
		if(s4[2]=='B'||s4[2]=='C') {
			return true;
		} else {
			return false;
		}
	} else if(s2[2]=='B') {
		if(s4[2]=='A'||s4[2]=='C') {
			return true;
		} else {
			return false;
		}
	} else if(s2[2]=='C') {
		if(s4[2]=='A'||s4[2]=='B') {
			return true;
		} else {
			return false;
		}
	} else if(s2[2]=='D') {
		if(s4[2]=='F') {
			return true;
		} else {
			return false;
		}
	} else if(s2[2]=='F') {
		if(s4[2]=='D') {
			return true;
		} else {
			return false;
		}
	}
}
bool check2() {
	if(s2[2]=='A') {
		if(s4[2]=='B') {
			return true;
		} else {
			return false;
		}
	} else if(s2[2]=='B') {
		if(s4[2]=='A'||s4[2]=='C') {
			return true;
		} else {
			return false;
		}
	} else if(s2[2]=='C') {
		if(s4[2]=='B') {
			return true;
		} else {
			return false;
		}
	} else if(s2[2]=='D') {
		if(s4[2]=='F') {
			return true;
		} else {
			return false;
		}
	} else if(s2[2]=='F') {
		if(s4[2]=='D') {
			return true;
		} else {
			return false;
		}
	}
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3) {
		if(s2[0]==s4[0]&&s2[1]==s4[1]) {
			if(check1()) {
				if(check2()) {
					cout<<"1111";
				} else {
					cout<<"1110";
				}
			} else {
				cout<<"1100";
			}
		} else {
			cout<<"1000";
		}
	} else {
		cout<<"0000";
	}
	return 0;
}


