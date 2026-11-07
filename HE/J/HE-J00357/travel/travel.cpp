#include<bits/stdc++.h>
using namespace std;
int c1,s1,c2,s2;
char ss1,ss2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    scanf("%d%d%c%d%d%c",&c1,&s1,&ss1,&c2,&s2,&ss2);
    if(c1==c2){
    printf("1");
    if(s1==s2){
    printf("1");
    if(((ss1=='D'||ss1=='F')&&(ss2=='D'||ss2=='F'))||(ss1=='A'||(ss1=='B'||ss1=='C'))&&(ss2=='A'||(ss2=='B'||ss2=='C'))){
    	printf("1");
    	if(ss1-ss1==1||ss2-ss1==1)printf("1");
    	else printf("0");
    }
    else printf("00");
    }
    else printf("000");
	}
    else printf("0000");
	return 0;
}
//Trick||Treat!
