#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c10,c11,c20,c21,s1,s2,t1,t2,p1,p2;
	int v1=0,v2=0;
	scanf("%c %c %c %c %c %c %c %c %c %c",&c10,&c11,&s1,&t1,&p1,&c20,&c21,&s2,&t2,&p2);
	v1=int(p1);
	v2=int(p2);
	if(c10==c20&&c11==c21){
		printf("%c",'1');
		if(t1==t2&&s1==s2){
			printf("%c",'1');
			if(((v1>=65&&v1<=67)&&(v2>=65&&v2<=67))||((v1>=68&&v1<=70)&&(v2>=68&&v2<=70))){
				printf("%c",'1');
				
				if((v1==v2+1)||(v1==v2-1)){
					printf("%c",'1');
				}
				else if((p1=='A'&&p2=='C')||(p1=='C'&&p2=='A')){
					printf("%c",'0');
				} 
			}
			else if(!((v1>=65&&v1<=67)&&(v2>=65&&v2<=67)) ||!((v1>=68&&v1<=70)&&(v2>=68&&v2<=70)) ){
				printf("%c%c",'0','0');
			}
		}
		
		else if(t1!=t2||s1!=s2){
			printf("%c%c%c",'0','0','0');
		} 
	}
	else if(c10!=c20||c11!=c21){
		printf("%c%c%c%c",'0','0','0','0');
	} 
	return 0;
}