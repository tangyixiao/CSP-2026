#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string c3,c4;
	cin>>c1>>c3>>c2>>c4;
	if(c1==c2) {
		printf("1");if(c3[0]==c4[0]&&c3[1]==c4[1]) {
		printf("1");
		if(c3[2]>='D'&&c4[2]>='D') {
			printf("1");
			if(abs(c3[2]-c4[2])==1) {
				printf("1");
			}
			else {
				printf("0");
			}
		} else if(c3[2]<='C'&&c4[2]<='C') {
			printf("1");
			if(abs(c3[2]-c4[2])==1) {
				printf("1");
			}
			else {
				printf("0");
			}
		} else {
			printf("00");
		}
	} else {
		printf("000");
	}

	} else {
		printf("0000");
	}
	

	return 0;
}
