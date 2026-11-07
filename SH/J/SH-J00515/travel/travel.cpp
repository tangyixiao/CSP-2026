#include <bits/stdc++.h>
using namespace std;
char a[20],b[20],c[20],d[20];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",a,b,c,d);
	if(a[0]==c[0]&&a[1]==c[1]) printf("1");
	else{
		printf("0000");
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1]) printf("1");
	else{
		printf("000");
		return 0;
	}
	if((b[2]<'D'&&d[2]<'D')||(b[2]>'C'&&d[2]>'C')) printf("1");
	else{
		printf("00");
		return 0;
	}
	if(b[2]+1==d[2]||d[2]+1==b[2]) printf("1");
	else printf("0");
	return 0;
}
