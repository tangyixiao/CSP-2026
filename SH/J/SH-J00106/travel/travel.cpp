#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	char n1,m1,ch1,n2,m2,ch2;
	scanf("%d %c%c%c %d %c%c%c",&c1,&n1,&m1,&ch1,&c2,&n2,&m2,&ch2);
	if(c1==c2){
		printf("1");
		if(n1==n2&&m2==m1){
			printf("1");
			if((ch1<='C'&&ch2<='C')||(ch1>'C'&&ch2>'C')){
				printf("1");
				if(ch1>'C'&&abs(ch1-ch2)==2){
					printf("1");
				}
				else if(ch1<='C'&&abs(ch1-ch2)==1){
					printf("1");
				}
				else{
					printf("0");
				}
			}
			else{
				printf("00");
			}
		}
		else{
			printf("000");
		}
	}
	else{
		printf("0000");
	}
	return 0;
}
