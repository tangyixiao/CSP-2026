#include<bits/stdc++.h>
using namespace std;
int c1,s1,c2,s2;
char s_1,s_2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%d%c%d%d%c",&c1,&s1,&s_1,&c2,&s2,&s_2);
	if(c1==c2) printf("1");
	else{
		printf("0000\n");
		return 0;
	}
	if(s1==s2) printf("1");
	else{
		printf("000\n");
		return 0;
	}
	bool flag=0;
	if((s_1=='A'||s_1=='B'||s_1=='C')&&(s_2=='D'||s_2=='F'))
		printf("0");
	else{
		printf("1");
		flag=1;
	}
	if(flag==1&&(abs(s_1-s_2)==1))
		printf("1");
	else printf("0");
	printf("\n");
	return 0;
}
