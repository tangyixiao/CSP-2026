#include<bits/stdc++.h>
using namespace std;
char a[11],b[11],c[11],d[11];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",a,b,c,d);
	bool flag=1;
	for(int i=0;i<2;i++){
		if(a[i]!=c[i]){
			flag=0;
			break;
		}
	}
	if(!flag){
		printf("0000");
		return 0;
	}
	printf("1");
	for(int i=0;i<2;i++){
		if(b[i]!=d[i]){
			flag=0;
			break;
		}
	}
	if(!flag){
		printf("000");
		return 0;
	}
	printf("1");
	if(b[2]=='A'||b[2]=='B'||b[2]=='C'){
		if(d[2]=='D'||d[2]=='E'){
			printf("00");
			return 0;
		}
		else{
			printf("1");
		}
	}
	else{
		if(d[2]=='D'||d[2]=='E'){
			printf("1");
		}
		else{
			printf("00");
			return 0;
		}
	}
	if(b[2]=='A'){
		if(d[2]=='B')
			printf("1");
		else
			printf("0");
		return 0;
	}
	if(b[2]=='B'){
		if(d[2]=='A'||d[2]=='C')
			printf("1");
		else
			printf("0");
		return 0;
	}
	if(b[2]=='C'){
		if(d[2]=='B')
			printf("1");
		else
			printf("0");
		return 0;
	}
	if(b[2]=='D'){
		if(d[2]=='F')
			printf("1");
		else
			printf("0");
		return 0;
	}
	if(b[2]=='F'){
		if(d[2]=='D')
			printf("1");
		else
			printf("0");
		return 0;
	}
	return 0;
}