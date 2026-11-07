#include <bits/stdc++.h>
using namespace std;

char a[4],a1[4],b[4],b1[4];

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s", a+1);
	scanf("%s", a1+1);
	scanf("%s", b+1);
	scanf("%s", b1+1);
	if(a[1]!='1' && a[2]!='6' || a[1]!='0' && a[2]!='1'){
		if(b[1]!='1' && b[2]!='6' || b[1]!='0' && b[2]!='1'){
			if(a[1]==b[1] && a[2]==b[2]){
				printf("1");
				if(a1[1]==b1[1] && a1[2]==b1[2]){
					printf("1");
					if(a1[3]>='A' && a1[3]<='C'){
						if(b1[3]>='A' && b1[3]<='C' && a1[3]!=b1[3]){
							printf("1");
							if(a1[3]==b1[3]+1 || a1[3]==b1[3]-1)
								printf("1");
							else
								printf("0");
						}else
							printf("00");
					}else{
						if(a1[3]=='D' || a1[3]=='E'){
							if(b1[3]=='D' || b1[3]=='E'){
								printf("1");
								if(a1[3]!=b1[3])
									printf("1");
								else
									printf("0");
							}
							else
								printf("00");
						}else
							printf("00");
					}
				}else
					printf("000");	
			}else
				printf("0000");
		}else
			printf("0000");
	}else
		printf("0000");
	return 0;
}
