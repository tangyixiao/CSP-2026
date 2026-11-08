#include <bits/stdc++.h>
using namespace std;
char a[20],b[20];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int x,y;
	scanf("%d%s%d%s",&x,a,&y,b);
	if(x==y){
		printf("1");
		if(a[0]==b[0]&&a[1]==b[1]){
			printf("1");
			char c=a[2],d=b[2];
			if(c=='A'&&d=='B'||c=='B'&&d=='A'||c=='A'&&d=='C'||c=='C'&&d=='A'||c=='B'&&d=='C'||c=='B'&&d=='C'||c=='D'&&d=='F'||c=='F'&&d=='D'){
				printf("1");
				if(c=='A'&&d=='B'||c=='B'&&d=='A'||c=='B'&&d=='C'||c=='B'&&d=='C'||c=='D'&&d=='F'||c=='F'&&d=='D'){
					printf("1");
				}else{
					printf("0");
				}
			}else{
				printf("00");
			}
		}else{
			printf("000");
		}
	}else{
		printf("0000");
	}
	return 0;
}
