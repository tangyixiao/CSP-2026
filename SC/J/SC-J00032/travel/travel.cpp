#include<bits/stdc++.h>
using namespace std;
char ca[5],sa[5],cb[5],sb[5];
int main(){
	freopen("travel.in","r",stdin); 
	freopen("travel.out","w",stdout);
	int flag=true;
	scanf("%s %s %s %s",ca,sa,cb,sb);
	if(ca[0]==cb[0]&&ca[1]==cb[1]){
		printf("1");
	}
	else {
		printf("0000");
		flag=false;
	}
	if(flag==true){
		if(sa[0]==sb[0]&&sa[1]==sb[1]){
			printf("1");
		}
		else {
			printf("000");
			flag=false;
		}
	}
	if(flag==true){
		if(sa[2]-'A'<=2&&sb[2]-'A'<=2){
			printf("1");
		}
		else if(sa[2]-'A'>=3&&sb[2]-'A'>=3){
			printf("1");
		}
		else{
			printf("00");
			flag=false;
		}
	}
	if(flag==true){	
		if(sa[2]-sb[2]==1||sa[2]-sb[2]==-1){
			printf("1");
		}
	}
	return 0;
}