#include<bits/stdc++.h>
using namespace std;

int a,b,c,d;

char e,f;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%d",&a,&b);
	cin>>e;
	scanf("%d%d",&c,&d);
	cin>>f;
	if(a==c){
		printf("1");
		if(b==d){
			printf("1");
			if((e>='A'&&e<='C'&&f>='A'&&f<='C')||(e>='D'&&e<='F'&&f>='D'&&f<='F')){
				printf("1");
				int aa,bb;
				aa=(int)(e-'A'+1);
				bb=(int)(f-'A'+1);
				if(abs(aa-bb)==1)  printf("1");
				else  printf("0");
			}
			else  printf("00");
		}
		else  printf("000");
	}
	else  printf("0000");
	fclose(stdin);
	fclose(stdout);
	return 0;
}
