#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
const int N=2e5+5,mod=998244353;
char s1[10],s2[10],t1[10],t2[10];

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",s1+1,s2+1,t1+1,t2+1);
	if(s1[1]==t1[1]&&s1[2]==t1[2]){
		printf("1");
		if(s2[1]==t2[1]&&s2[2]==t2[2]){
			printf("1");
			int a=0,b=0;
			if(s2[3]<='D') a=s2[3]-'A';
			else a=4;
			if(t2[3]<='D') b=t2[3]-'A';
			else b=4;			
			if(min(a,b)>=3||max(a,b)<3){
				printf("1");
				if(a>b) swap(a,b);
				if(b-a==1){
					printf("1");
				} else{
					printf("0");
				}
			} else{
				printf("00");
			}
		} else{
			printf("000");
		}
	} else{
		printf("0000");
	}
	return 0;
}