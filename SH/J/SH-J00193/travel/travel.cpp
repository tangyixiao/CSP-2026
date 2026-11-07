#include<cstdio>
#include<cstdlib>
int c1,c2;
char s1[5],s2[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%s%d%s",&c1,s1,&c2,s2);
	if(c1!=c2)
		printf("0000");
	else{
		printf("1");
		if(s1[0]!=s2[0]||s1[1]!=s2[1])
			printf("000");
		else{
			printf("1");
			if(s1[2]<'D'&&s2[2]<'D'||s1[2]>'C'&&s2[2]>'C'){
				printf("1");
				if(s1[2]==s2[2]+1||s1[2]+1==s2[2])
					printf("1");
				else
					printf("0");
			}else
				printf("00");
		}
	} 
	return 0;
} 
