// 1.travel
// Done
#include<bits/stdc++.h>
using namespace std;

int c1,s1,c2,s2;
char x1,x2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d %d %c %d %d %c",&c1,&s1,&x1,&c2,&s2,&x2);
	if(c1==c2){
		printf("1");
	}else{
		printf("0000");
		return 0;
	}
	if(s1==s2){
		printf("1");
	}else{
		printf("000");
		return 0;
	}
	if(((x1<='C')&&(x2<='C'))||((x1>='D')&&(x2>='D')) ){
		printf("1");
	}else{
		printf("00");
		return 0;
	}
	if( abs(x1-x2)==1 && x1!=x2 ){
		printf("1");
	}else{
		printf("0");
		return 0;
	}
	return 0;
}
