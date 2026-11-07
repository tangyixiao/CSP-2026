#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,x1,x2;
	char a1,a2;
	scanf("%d%d%c%d%d%c",&c1,&x1,&a1,&c2,&x2,&a2);
	if(c1==c2){
		printf("1");
		if(x1==x2){
			printf("1");
			if((a1<='C'&&a2<='C')||(a1>'C'&&a2>'c')){
				printf("1");
				if(a1+1==a2||a1-1==a2){
					printf("1");
						return 0;
				}else{
					printf("0");
					return 0;
				}
			}else{
				printf("00");
				return 0;
			}
		}else{
			printf("000");
			return 0;
		}
	}else{
		printf("0000");
	}
	return 0;
}