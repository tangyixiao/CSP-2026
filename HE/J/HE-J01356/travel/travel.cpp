#include<bits/stdc++.h>
using namespace std;
char c1[5],s1[5],c2[5],s2[5];
int a1,a2,h1,h2,l1,l2,u1,u2;
int f(char c);
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",c1+1,s1+1,c2+1,s2+1);
	a1=(c1[1]-'0')*10+(c1[2]-'0');
	a2=(c2[1]-'0')*10+(c2[2]-'0');
	l1=(s1[1]-'0')*10+(s1[2]-'0');
	l2=(s2[1]-'0')*10+(s2[2]-'0');
	h1=f(s1[3]);
	h2=f(s2[3]);
	if(h1==1||h1==2||h1==3) u1=1;
	else u1=2;
	if(h2==1||h2==2||h2==3) u2=1;
	else u2=2;
	bool t1=false,t2=false,t3=false,t4=false;
	if(a1==a2){
		printf("1");
		t1=true;
	}
	else{
		printf("0");
	}
	if(t1&&l1==l2){
		printf("1");
		t2=true;
	}
	else{
		printf("0");
	}
	if(t2&&u1==u2){
		printf("1");
		t3=true;
	}
	else{
		printf("0");
	}
	if(t3&&abs(h1-h2)==1){
		printf("1");
	}
	else{
		printf("0");
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
int f(char c){
	if(c=='A') return 1;
	if(c=='B') return 2;
	if(c=='C') return 3;
	if(c=='D') return 4;
	if(c=='F') return 5;
}
