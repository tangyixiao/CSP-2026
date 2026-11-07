#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	string a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a != c){
		printf("0000");
		return 0;
	}
	if(!(b[0]==d[0] && b[1]==d[1])){
		printf("1000");
		return 0;
	}
	if(!(b[2]-d[2]==1||d[2]-b[2]==1)){
		printf("11");
		if(b[2]=='A'&&d[2]=='C'||b[2]=='C'&&d[2]=='A'){
			printf("10");
			return 0;
		}
		printf("00");
		return 0;
	}
	if(b[2]=='C'&&d[2]=='D'||b[2]=='D'&&d[2]=='C'){
		printf("1100");
		return 0;
	}
	printf("1111");

	return 0;
}