#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m;
	string p,q;
	scanf("%d",&n);
	cin>>p;
	scanf("%d",&m);
	cin>>q;
	int R=10*(p[0]-'0')+(p[1]-'0');
	int X=10*(q[0]-'0')+(q[1]-'0');
	char a=p[2],b=q[2];
	if(n==m){
		printf("1");
	}
	else{
		printf("0000");
		return 0;
	}
	if(R==X){
		printf("1");
	}
	else{
		printf("000");
		return 0;
	}
	if((a<'D'&&b<'D')||(a>'C'&&b>'C')){
		printf("1");
	}
	else{
		printf("00");
		return 0;
	}
	if(a+1==b||a-1==b){
		printf("1");
	}
	else{
		printf("0");
		return 0;
	}
	return 0;
}