#include <bits/stdc++.h>
using namespace std;
int c1,c2;
char s1[5],s2[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%s%d%s",&c1,s1+1,&c2,s2+1);
	if(c1==c2){
		printf("1");
		if(s1[1]==s2[1]&&s1[2]==s2[2]){
			printf("1");
			if((s1[3]<='C'&&s2[3]<='C')||(s1[3]>='D'&&s2[3]>='D')){
				printf("1");
				if(s1[3]-s2[3]==1||s2[3]-s1[3]==1)
					printf("1");
				else{
					printf("0");
				}
			}
			else
				printf("00");
		}
		else
			printf("000");
	}
	else
		printf("0000");
}
