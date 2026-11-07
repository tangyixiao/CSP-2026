#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,s1,c2,s2;
	char t1,t2;
	scanf("%d %d%c %d %d%c",&c1,&s1,&t1,&c2,&s2,&t2);
	if(c1!=c2){
		printf("0000");
		return 0;
	}
	printf("1");
	if(s1!=s2){
		printf("000");
		return 0;
	}
	printf("1");
	if(t1<='C'&&t2<='C'||t1>='D'&&t2>='D'){
		printf("1");
		if((t1-t2==1||t2-t1==1)&&t1<='C'){
			printf("1");
		}
		else if(t1=='F'&&t2=='D'||t1=='D'&&t2=='F'){
			printf("1");
		}
		else{
			printf("0");
		}
	}
	else{
		printf("00");
	}
	return 0;
} 
