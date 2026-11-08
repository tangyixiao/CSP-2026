#include<bits/stdc++.h>
//#define int long long
using namespace std;
char a[101],b[101],c[101],d[101];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",a+1,b+1,c+1,d+1);
	if((a[1]!=c[1])||(a[2]!=c[2]))	printf("0000");
	else{
		if(b[1]!=d[1]||b[2]!=d[2])	printf("1000");
		else{
			if((b[3]<='C'&&d[3]>'C')||(b[3]>'C'&&d[3]<='C')) printf("1100");
			else{
				if(abs(b[3]-d[3])>1)	printf("1110");
				else	printf("1111");
			}
		}
	}
	return 0;
}

