#include<cstdio>
int __abs(int a){
	return a>0?a:-a;
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	char a[6], b[6], c[6], d[6];
	scanf("%s %s %s %s", a, b, c, d);
	if(a[0]==c[0]&&a[1]==c[1]){
		printf("1");
		if(b[0]==d[0]&&b[1]==d[1]){
			printf("1");
			if(b[2]<='C'&&d[2]<='C'){
				printf("1");
				if(__abs(b[2]-d[2])==1){
					printf("1");
				}
				else{
					printf("0");
				}
			}
			else if(b[2]>='D'&&d[2]>='D'){
				printf("11");
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
