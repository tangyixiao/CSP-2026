#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	int xa,ya,xb,yb;
	char za,zb;
	bool a=0,b=0,c=0,d=0;
	cin>>xa>>ya>>za>>xb>>yb>>zb;
	if(xa==xb){
		a=1;
		if(ya==yb){
			b=1;
			if(((za=='A'||za=='B'||za=='C')&&(za=='A'||za=='B'||za=='C'))||((za=='D'||za=='F')&&(za=='D'||za=='F'))){
				c=1;
				if((za=='A'&&zb=='B')||(za=='B'&&zb=='A')||(za=='C'&&zb=='B')||(za=='B'&&zb=='C')||za=='D'||za=='F'){
					d=1;
				}cout<<a<<b<<c<<d;
			}else{
				cout<<a<<b<<c<<d;
			}
		}else{
			cout<<a<<b<<c<<d;	
		}
	}else{
		cout<<a<<b<<c<<d;
	}
	freopen("travel.out","w",stdout);
	return 0; 
}
