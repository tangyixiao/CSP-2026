#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,x1,x2;
char z1,z2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		x1+=s1[i];
		x2+=s2[i];
	}
	z1=s1[2];
	z2=s2[2];
	if(c1==c2){
		printf("%d",1);
		if(x1==x2){
			printf("%d",1);
			if((z1<='C'&&z2<='C')||(z1>'C'&&z2>'C')){
				printf("%d",1);
				if(z1-z2+'0'=='1'||z2-z1+'0'=='1'){
					printf("%d",1);
				}
				else{
					printf("%d",0); 
				}
			}
			else{
				printf("%d%d",0,0);
			}
		}else{
			printf("%d%d%d",0,0,0);
		}
	}else{
		printf("%d%d%d%d",0,0,0,0);
	}
	return 0;
}