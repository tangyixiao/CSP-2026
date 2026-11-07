#include<bits/stdc++.h>
using namespace std;
int main() {
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int a, b;
int f=1,f1=1,f2=1;

	string s, s2;
	cin >> a >> s >> b >> s2;
	if (a == b) {
		cout << "1";
	} else {
		cout << "0";
		f=0;
	}

	if (s[0] == s2[0] && s[1] == s2[1]&&f==1) {
		cout << "1";
	} else {
		cout << "0";
		f1=0;
	}
	if ((s[2] <= 'C' && s2[2] <= 'C'&&f1==1) || (s[2] >= 'D' && s2[2] >= 'D'&&f1==1)) {
		cout << "1";
	} else {
		cout << "0";
		f2=0;
	}
	if(f2==1&&abs(int(s[2]-'A')-int(s2[2]-'A'))==1){
	cout << "1";
	} else {
		cout << "0";
		f=0;
	}

	return 0;
}
