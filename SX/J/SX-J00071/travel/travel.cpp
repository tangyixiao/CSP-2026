#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a1[2],b1[2],a2[3],b2[3];
	char z;
	for(int i=0;i<2;i++){
		scanf("%c",&a1[i]);
	}
	scanf("%c",&z);
	for(int i=0;i<3;i++){
		scanf("%c",&a2[i]);
	}
	scanf("%c",&z);
	for(int i=0;i<2;i++){
		scanf("%c",&b1[i]);
	}
	scanf("%c",&z);
	for(int i=0;i<3;i++){
		scanf("%c",&b2[i]);
	}
    bool p=0;
	for(int i=0;i<2;i++){
		if(a1[i]!=b1[i])p=1;
	}
	if(p==1){
		printf("%d%d%d%d",0,0,0,0);
		return 0;
	}
	else printf("%d",1);
	p=0;
	for(int i=0;i<2;i++){
		if(a2[i]!=b2[i])p=1;
	}
	if(p==1){
		printf("%d%d%d",0,0,0);
		return 0;
	}
	else printf("%d",1);
	if(a2[2]<='C'&&b2[2]<='C')printf("%d",1);
	else if(a2[2]>'C'&&b2[2]>'C')printf("%d",1);
	else {
		printf("%d%d",0,0);
		return 0;
	}
	if(a2[2]+1==b2[2]||a2[2]-1==b2[2])printf("%d",1);
	else if(a2[2]=='D'&&b2[2]=='F')printf("%d",1);
	else if(a2[2]=='F'&&b2[2]=='D')printf("%d",1);
	else printf("%d",0);
	return 0;
}