#include<bits/stdc++.h>
using namespace std;
char c1[5],c2[5],s1[5],s2[5],ans[5];
int a1,a2,b1,b2,f1,f2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",c1+1,s1+1,c2+1,s2+1);
	for(int i=1;i<=4;i++){
		ans[i]='0';
	}
	a1=(c1[1]-'0')*10+c1[2]-'0';
	a2=(c2[1]-'0')*10+c2[2]-'0';
	f1=s1[3]-64;
	f2=s2[3]-64;
	b1=(s1[1]-'0')*10+s1[2]-'0';
	b2=(s2[1]-'0')*10+s2[2]-'0';
	if(a1==a2){
		ans[1]='1';
		if(b1==b2){
			ans[2]='1';
			if(f1<=3){
				if(f2<=3){
					ans[3]='1';
					if(f1+1==f2||f1-1==f2){
						ans[4]='1';
					}
				}
			}
			else{
				if(f2>3){
					ans[3]='1';
					if(f1+1==f2||f1-1==f2){
						ans[4]='1';
					}
				}
			}
		}
	}
	for(int i=1;i<=4;i++){
		printf("%c",ans[i]);
	}
	return 0;
}