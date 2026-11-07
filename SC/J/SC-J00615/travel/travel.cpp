#include<bits/stdc++.h>
using namespace std;
int x_l,y_l;
int x_h,y_h;
char x_w,y_w;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d %d%c %d %d%c",&x_l,&x_h,&x_w,&y_l,&y_h,&y_w);
	if(x_l==y_l){
		printf("1");
		if(x_h==y_h){
			printf("1");
			if((x_w<='C'&&y_w<='C')||(x_w>'C'&&y_w>'C')){
				printf("1");
				if(x_w+1==y_w||x_w-1==y_w){
					printf("1\n");
				}else{
					printf("0\n");
				}
			}else{
				printf("00\n");
			}
		}else{
			printf("000\n");
		}
	}else{
		printf("0000\n");
	}
	return 0;
}