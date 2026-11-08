#include<bits/stdc++.h>
using namespace std;
int cr,cx;
char sr[5],sx[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d %s %d %s",&cr,sr,&cx,sx);
	if(cr==cx){
		printf("1");
		if(sr[0]==sx[0]&&sr[1]==sx[1]){
			printf("1");
			if(sr[2]=='A'){
				if(sx[2]=='C'||sx[2]=='B'){
					if(sx[2]=='B'){
						printf("11");
						return 0;
					}
					else{
						printf("10");
						return 0;
					}
				}
				else{
					printf("00");
					return 0;
				}
			}
			if(sr[2]=='B'){
				if(sx[2]=='A'||sx[2]=='C'){
					printf("11");
					return 0;
				}
				else{
					printf("10");
					return 0;
				}
			}
			if(sr[2]=='C'){
				if(sx[2]=='B'){
					printf("11");
					return 0;
				}
				if(sx[2]=='A'){
					printf("10");
					return 0;
				}
				printf("00");
				return 0;
			}
			if(sr[2]=='D'||sr[2]=='F'){
				if(sx[2]=='D'||sx[2]=='F'){
					printf("11");
					return 0;
				}
				else printf("00");
			}
		}
		printf("000");
	}
	else printf("0000");
	return 0;
}
