#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a1,b1,c1,d1,e1,a2,b2,c2,d2,e2;
	scanf("%c%c %c%c%c %c%c %c%c%c",&a1,&b1,&c1,&d1,&e1,&a2,&b2,&c2,&d2,&e2);
	if(a1==a2&&b1==b2){
		cout<<1;
		if(c1==c2&&d1==d2){
			cout<<1;
			if((e1=='A'&&e2=='B')||(e1=='A'&&e2=='C')||(e1=='C'&&e2=='B')||(e1=='D'&&e2=='F')||(e2=='A'&&e1=='B')||(e2=='A'&&e1=='C')||(e2=='C'&&e1=='B')||(e2=='D'&&e1=='F')){
				cout<<1;
				if((e1=='A'&&e2=='C')||(e2=='A'&&e1=='C'))cout<<0;
				else cout<<1;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
}