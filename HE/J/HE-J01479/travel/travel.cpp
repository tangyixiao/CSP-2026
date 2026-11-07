#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int zuo1,zuo2;
	char a[3],b[3];
	scanf("%s %c%c%c %s %c%c%c",&zuo1,&a[0],&a[1],&a[2],&zuo2,&b[0],&b[1],&b[2]);
	if(zuo1==zuo2){
		printf("1");
	}else{
		printf("0000");
		return 0;
	}
	if(a[0]==b[0]&&a[1]==b[1]){
		printf("1");
	}else{
		printf("000");
		return 0;
	}
	
	if('A'<=a[2]&&'C'>=a[2]&&b[2]>='A'&&b[2]<='C'){
		printf("1");
	}else if('D'<=a[2]&&'F'>=a[2]&&'D'<=b[2]&&'F'>=b[2]){
		printf("11");
		return 0;
	}else{
		printf("00");
		return 0;
	}
	if(a[2]=='B'||b[2]=='B'){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
} 
