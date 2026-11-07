#include<bits/stdc++.h>
using namespace std;
int a1[3],a2[3];
char c,s1[4],s2[4],c1[4],c2[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%c%s%c%s%c%s",s1+1,&c,s2+1,&c,c1+1,&c,c2+1);
	if(s1[1] == c1[1]&&s1[2] == c1[2]){
		printf("1");
		if(s2[1] == c2[1]&&s2[2] == c2[2]){
			printf("1");
			if((max(c2[3],s2[3])-min(c2[3],s2[3]) == 1&&max(c2[3],s2[3]) != 'D')||(max(c2[3],s2[3])-min(c2[3],s2[3]) == 2&&max(c2[3],s2[3]) == 'C')){
				printf("1");
				if(max(c2[3],s2[3])-min(c2[3],s2[3]) == 1&&max(c2[3],s2[3]) != 'D'){
					printf("1");
				}else{
					printf("0");
				}
			}else{
				printf("00");
			}
		}else{
			printf("000");
		}
	}else{
		printf("0000");
	}
	printf("\n");
	return 0;
} 