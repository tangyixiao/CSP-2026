#include<bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;
bool ok1,ok2,ok3;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		ok1=1;
	} else {
		cout << 0;
	}
	if (ok1 && s1[0] == s2[0] && s1[1] == s2[1]) {
		cout << 1;
		ok2=1;
	} else {
		cout << 0;
	}
	if (ok1 && ok2 && s1[2] < 'D' && s2[2] < 'D') {
		cout<<1;
		ok3=1;
	}
	else if(ok1 && ok2 && 'D'<=s1[2] && s1[2]<='E'){
		cout<<1;
		ok3=1;
	}
	else{
		cout<<0;
	}
	if(ok1 && ok2 && ok3){
		if(s1[2]>s2[2]){
			if(s1[2]-s2[2]==1){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		if(s2[2]>s1[2]){
			if(s2[2]-s1[2]==1){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
	}
	else{
		cout<<0;
	}
	return 0;
}