#include<bits/stdc++.h>
using namespace std;
int a,x;
char c[3],s[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	scanf("%d%s%d%s",&a,c,&x,s);
	if(a==x){
		printf("1");
		if(c[0]==s[0]&&c[1]==s[1]){
			printf("1");
			if((c[2]<='C'&&s[2]<='C')||(c[2]>='D'&&s[2]>='D')){
//				printf("%c%c",c[2],s[2]);
				printf("1");
				if((c[2]<='C'&&s[2]<='C')&&(s[2]-1==c[2]||c[2]-1==s[2])){
					printf("1");
				}
				else if((c[2]>='D'&&s[2]>='D')&&(s[2]-2==c[2]||c[2]-2==s[2])){
					printf("1");
				}
				else printf("0");
			}
			else printf("00");
		}
		else printf("000");
	}
	else printf("0000");
	return 0;
}
//
