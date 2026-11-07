#include <bits/stdc++.h>
using namespace std;
void read(int &a1,int &b1,int &c1){
	char c;
	do{
		c=getchar();
		if(c>='0'&&c<='9') break;
	}while(1);
	c1+=c-'0';
	c=getchar();c1*=10;c1+=c-'0';
	c=getchar();
	c=getchar();a1+=c-'0';
	c=getchar();a1*=10;a1+=c-'0';
	c=getchar();b1=c-'A'+1;
	return;
}
int a[2],b[2],c[2];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	read(a[0],b[0],c[0]);
	read(a[1],b[1],c[1]);
	if(c[0]==c[1]){
		putchar('1');
		if(a[0]==a[1]){
			putchar('1');
			if((b[0]==4||b[0]==6)^(b[1]==4||b[1]==6)){
				putchar('0');
				putchar('0');
			}else{
				putchar('1');
				if(b[0]>b[1]) swap(b[0],b[1]);
				if((b[0]==1||b[0]==2)&&b[1]-b[0]==1) putchar('1');
				else if(b[0]==4&&b[1]==6) putchar('1');
				else putchar('0');
			}
		}else{
			putchar('0');
			putchar('0');
			putchar('0');
		}
	}else{
		putchar('0');
		putchar('0');
		putchar('0');
		putchar('0');
	}
	return 0;
}
