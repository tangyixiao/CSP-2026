#include<bits/stdc++.h>
using namespace std;
int c1,c2,c3,a,b;
char s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d",&c1);
	printf("%d\n",c1);
	//c1 
	scanf("%d%c",&c3,&s1);
	a=c3;
	printf("%d %c\n",c3,s1);
	//s1
	scanf("%d",&c2);
	printf("%d\n",c2);
	//c2
	scanf("%d%c",&c3,&s2);
	printf("%d %c\n",c3,s2);
	b=c3;
	//s2 ‰»Î 
	if(c1==c2) printf("1");
	else printf("0");
	if(a==b&&c1==c2) printf("1");
	else printf("0");
	if(a==b&&c1==c2){
		if(s1=='F'&&s2=='D'||s1=='D'&&s2=='F'){
			printf("1");
		}
		else {
			if(s1=='A'&&(s2=='B'||s2=='C')||s1=='B'&&(s2=='A'||s2=='C')||s1=='C'&&(s2=='B'||s2=='A')){
				printf("1");
			}
			else printf("0");
		}
	}
	else printf("0");
	if(a==b&&c1==c2){
		if(s1=='A'&&s2=='B'||s1=='B'&&(s2=='A'||s1=='C')||s1=='F'&&s2=='D'||s1=='D'&&s2=='F'){
			printf("1");
		}
		else printf("0");
	}
	else printf("0");
	return 0;
} 
