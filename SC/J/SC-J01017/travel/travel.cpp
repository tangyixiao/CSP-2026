#include<bits/stdc++.h>
using namespace std;
char c1[10],s1[10],c2[10],s2[10];
bool is;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s %s %s %s",c1,s1,c2,s2);
	for(int i=0;i<=1;i++){
		if(c1[i]!=c2[i]){
			is=1;
			break;
		}
	}
	if(!is){
		printf("1");
	}else{
		printf("0000");
		return 0;
	}
	is=0;
	for(int i=0;i<=1;i++){
		if(s1[i]!=s2[i]){
			is=1;
			break;
		}
	}
	if(!is){
		printf("1");
	}else{
		printf("000");
		return 0;
	}
	if(s1[2]=='F'||s1[2]=='D'){
		if(s2[2]=='F'||s2[2]=='D'){
			printf("11");
		}else{
			printf("00");
		}
	}else{
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
			printf("1");
			if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')){
				printf("1");
			}else if((s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')){
				printf("1");
			}else{
				printf("0");
			}
		}else{
			printf("00");
		}
	}
	return 0;
}