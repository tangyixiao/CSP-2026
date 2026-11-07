#include<bits/stdc++.h>
using namespace std;

char s[20];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1[5],c2[5],s1[6],s2[6];
	scanf("%s%s%s%s",c1+1,s1+1,c2+1,s2+1);
	s[1]=c1[1],s[2]=c1[2];
	s[4]=s1[1],s[5]=s1[2],s[6]=s1[3];
	s[8]=c2[1],s[9]=c2[2],s[11]=s2[1],s[12]=s2[2],s[13]=s2[3];
//	for(int i = 1;i <= 13;i++){
//		printf("%c",s[i]);
//	}
	if(s[1]==s[8]&&s[2]==s[9]){
		printf("1");
		if(s[4]==s[11]&&s[5]==s[12]){
			printf("1");
			if(s[6]>='A'&&s[6]<='C'){
				if(s[13]>='A'&&s[13]<='C'){
					printf("1");
					if(abs(s[6]-s[13])==1){
						printf("1\n");
					}else{
						printf("0\n");
					}
				}else{
					printf("00\n");
				}
			}else{
				if(s[13]=='D'||s[13]=='F'){
					printf("11\n");
				}else{
					printf("00\n");
				}
			}		
		}else{
			printf("000\n");
		}		
	}else{
		printf("0000\n");
	}


	return 0;
}
