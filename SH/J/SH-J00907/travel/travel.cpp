#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2) {
		cout << 1;

	} else {
		cout << 0;
	}
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]) {
		cout << 1;
	} else {
		cout << 0;
	}
	int sti = 0;
	if(s1[2] == 'A'){
		sti += -1;
	}
	if(s2[2] == 'A'){
		sti += -1;
	}if(s1[2] == 'B'){
		sti += -1;
	}
	if(s2[2] == 'B'){
		sti += -1;
	}if(s1[2] == 'C'){
		sti += -1;
	}
	if(s2[2] == 'C'){
		sti += -1;
	}if(s1[2] == 'D'){
		sti += 1;
	}
	if(s2[2] == 'D'){
		sti += 1;
	}if(s1[2] == 'F'){
		sti += 1;
	}
	if(s2[2] == 'F'){
		sti += 1;
	}
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&
	(sti==-2||sti==2)) {
		cout << 1;
	} else {
		cout << 0;
	}
	if(s1[2]=='F'){
		s1[2] = 'E';
	}if(s2[2]=='F'){
		s2[2] = 'E';
	}
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&
	(sti==-2||sti==2)&&abs(s1[2]-s2[2])==1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
