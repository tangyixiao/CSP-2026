#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m;
	int a,b;
	char c,d;
	scanf("%d%d%c%d%d%c",&n,&a,&c,&m,&b,&d);
	if(n==m){
		printf("%d",1);
		if(a==b){
			printf("%d",1);
			if(((c=='A'||c=='B'||c=='C')&&(d=='A'||d=='B'||d=='C'))||((c=='D'||c=='F')&&(d=='D'||d=='F'))){
				printf("%d",1);
				bool you = (c=='D'||c=='F')&&(d=='D'||d=='F');
				bool zuo = ((c=='A')&&(d=='B'))||((c=='B')&&(d=='C'))||((d=='A')&&(c=='B'))||((d=='B')&&(c=='C'));
				if(you) printf("%d",1);
				else if(zuo) printf("%d",1);
				else printf("%d",0);
			}
			else printf("%d%d",0,0);
		}
		else printf("%d%d%d",0,0,0);
	}
	else printf("%d%d%d%d",0,0,0,0);
	return 0;
}
