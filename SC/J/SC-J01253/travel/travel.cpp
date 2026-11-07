#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[3],c[3];
	char b[4],d[4];
	scanf("%c%c %c%c%c %c%c %c%c%c",&a[1],&a[2],&b[1],&b[2],&b[3],&c[1],&c[2],&d[1],&d[2],&d[3]);
	if(a[1]!=c[1]||a[2]!=c[2]){
		printf("0000");
		return 0;
	}
	else
		printf("1");
	bool f=0;
	if(d[1]-'0'==b[1]-'0'&&b[2]-'0'==d[2]-'0')
		f=1;
	if(f){
		printf("1");
		if((b[3]>='D'&&b[3]<='E')&&(d[3]>='D'&&d[3]<='E'))
			printf("11");
		else if((b[3]>='A'&&b[3]<='C')&&(d[3]>='A'&&d[3]<='C')){
			printf("1");
			if(abs(b[3]-d[3])==1)
				printf("1");
			else
				printf("0");
		}
		else
			printf("00");
	}
	else{
		printf("000");
	}
	return 0;
}
