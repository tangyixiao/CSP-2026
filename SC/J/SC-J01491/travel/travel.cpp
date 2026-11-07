#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,g,h;
char n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%d",&a,&b);
	scanf("%c",&n);
	if(n=='A'){
		e=1;
		g=1;
	}
	else if(n=='B'){
		e=1;
		g=2;
	}
	else if(n=='C'){
		e=1;
		g=3;
	}
	else if(n=='D'){
		e=2;
		g=4;
	}
	else if(n=='F'){
		e=2;
		g=5;
	}
	scanf("%d%d",&c,&d);
	scanf("%c",&m);
	if(m=='A'){
		f=1;
		h=1;
	}
	else if(m=='B'){
		f=1;
		h=2;
	}
	else if(m=='C'){
		f=1;
		h=3;
	}
	else if(m=='D'){
		f=2;
		h=4;
	}
	else if(m=='F'){
		f=2;
		h=5;
	}
	if(a==c) printf("1");
	else printf("0");
	if(a==c && b==d) printf("1");
	else printf("0");
	if(a==c && b==d && e==f) printf("1");
	else printf("0");
	if((a==c && b==d && e==f) && (!((h==1 && g==3) || (h==3 && g==1)))) printf("1");
	else printf("0");
	return 0;
}