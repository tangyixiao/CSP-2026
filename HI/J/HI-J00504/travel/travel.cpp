#include<bits/stdc++.h>
using namespace std;
string c[2], s[2];
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c[0] >> s[0] >> c[1] >> s[1];
	if(c[0] == c[1]){
		printf("1");
	}
	else{
		printf("0000\n");
		return 0;
	}
	if(s[0][0]==s[1][0] && s[1][1] == s[0][1]){
		printf("1");
	}
	else{
		printf("000\n");return 0;
	}
	int p = abs(s[0][2] - s[1][2]);
	char a = s[0][2], b = s[1][2];
	bool b1 = ((a!='C'||a!='D')&&(b!='C'&&b!='D'));
	if((a>'C'&&b>'C')||(a<'D'&&b<'D')){
		printf("1");
	}
	else{
		printf("00\n");return 0;
	}
	if(p==1 && b1){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	return 0;
}
