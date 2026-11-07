#include <bits/stdc++.h>
using namespace std;

int a,b;
char s[6],r[6];

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%s%d%s",&a,s+1,&b,r+1);
	if(a==b){
		printf("1");
	}
	else{
		printf("0000");
		return 0;
	}
	if(s[2]==r[2]&&s[1]==r[1]){
		printf("1");
	}
	else{
		printf("000");
		return 0;
	}
	if((s[3]=='A'||s[3]=='B'||s[3]=='C')&&(r[3]=='A'||r[3]=='B'||r[3]=='C')){
		printf("1");
	}
	else{
		if((s[3]=='D'||s[3]=='E')&&(r[3]=='D'||r[3]=='E')){
			printf("1");
		}
		else{
			printf("00");
			return 0;
		}
	}
	if((s[3]=='A'&&r[3]=='B')||(s[3]=='B'&&r[3]=='A')||(s[3]=='C'&&r[3]=='B')||(s[3]=='C'&&r[3]=='B')||(s[3]=='D'&&r[3]=='E')||(s[3]=='E'&&r[3]=='D')){
		printf("1");
		return 0;
	}
	else{
		printf("0");
		return 0;
	}
	return 0;
}