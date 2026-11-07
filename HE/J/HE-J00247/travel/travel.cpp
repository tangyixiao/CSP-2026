#include <bits/stdc++.h>
using namespace std;
char s1[5],s2[5],s3[5],s4[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",s1+1,s2+1,s3+1,s4+1);
	int sa = s1[2]-'0',sb = s3[2]-'0';
	int a=0,b=0,c=0,d=0; 
	for(int i=1;i<=2;i++){
		a*=10;
		a+=s2[i]-'0';
		b*=10;
		b+=s4[i]-'0';
	}
	c = s2[3]-'A',d = s4[3]-'A';
	if(sa!=sb){
		printf("0000");
		return 0;
	}else
		printf("1");
	if(a!=b){
		printf("000");
		return 0;
	}else
		printf("1");
	if((c==2&&d==3)||(c==3&&d==2)){
		printf("00");
		return 0;
	}else
		printf("1");
	if((abs(c-d)==1)||(c==3&&d==5)||(c==5&&d==3))
		printf("1");
	else
		printf("0");
	return 0;
}
