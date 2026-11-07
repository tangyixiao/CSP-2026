#include<bits/stdc++.h>
using namespace std;
int a,b;
char c[5],d[5]; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%s%d%s",&a,c,&b,d);
	if(a!=b){
		printf("0000");
		return 0;
	}else{
		printf("1"); 
		if((c[0]!=d[0])||(c[1]!=d[1])){
			printf("000");
			return 0;
		}else{
			printf("1"); 
			int x=c[2]-'A',y=d[2]-'A';
			if((x<=2&&y<=2)||(x>=3&&y>=3)){
				printf("1"); 
				if(x+y==1||x+y==8||(x==1&&y==2)||(x==1&&y==2)){
					printf("1"); 
				}else{
					printf("0");
					return 0;
				}
			}else{
				printf("00");
				return 0;
			}
		}
	}
	return 0;
} 
