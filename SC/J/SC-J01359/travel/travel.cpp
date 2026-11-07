#include<bits/stdc++.h>
using namespace std;

char aa1,aa2,aa3,aa4,A,bb1,bb2,bb3,bb4,B;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%c",&aa1);
	scanf("%c",&aa2);
	scanf("%c",&aa3);
	scanf("%c",&aa3);
	scanf("%c",&aa4);
	scanf("%c",&A);
	scanf("%c",&bb1);
	scanf("%c",&bb1);
	scanf("%c",&bb2);
	scanf("%c",&bb3);
	scanf("%c",&bb3);
	scanf("%c",&bb4);
	scanf("%c",&B);
	if(aa1==bb1&&aa2==bb2){
		printf("1");
		if(aa3==bb3&&aa4==bb4){
			printf("1");
			if((A<='C'&&B<='C')||(A>='D'&&B>='D')){
				printf("1");
				if(A=='A'){
					if(B=='B'){
						printf("1");
					}else{
						printf("0");
					}
				}else if(A=='B'){
					if(B=='A'||B=='C'){
						printf("1");
					}else{
						printf("0");
					}
				}else if(A=='C'){
					if(B=='B'){
						printf("1");
					}else{
						printf("0");
					}
				}else if(A=='D'){
					if(B=='F'){
						printf("1");
					}else{
						printf("0");
					}
				}else if(A=='F'){
					if(B=='D'){
						printf("1");
					}else{
						printf("0");
					}
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
	return 0;
}