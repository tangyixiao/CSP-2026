#include<bits/stdc++.h>
using namespace std;


string c1,c2,s1,s2;

int check(char z){
	if(z=='A') return 1;
	if(z=='B') return 1;
	if(z=='C') return 1;
	if(z=='D') return 2;
	if(z=='F') return 2;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int y=0;
	if(c1==c2){
		printf("1");
	}
	else {
		y++;
		printf("0");
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&y==0){
		printf("1");
	}
	else {
		y++;
		printf("0");
	}
	int a=check(s1[2]),b=check(s2[2]);
	if(a==b&&y==0) {
		printf("1");
	}
	else {
		y++;
		printf("0");
	}
	char c=s1[2],cc=s2[2];
	if(y==0&&((c=='A'&&cc=='B')||(c=='B'&&cc=='A')||(c=='B'&&cc=='C')||(c=='C'&&cc=='B')||(c=='D'&&cc=='F')||(c=='F'&&cc=='D'))){
		printf("1");
	}
	else {
		y++;
		printf("0");
	}

	return 0;
}