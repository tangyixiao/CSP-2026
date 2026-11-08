#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,a="1",b="0",c="";
int d1,d2;
int k1,k2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		c+=a;
		d1=int(s1[0]-48);
		d1=d1*10+int(s1[1]-48);
		d2=int(s2[0]-48);
		d2=d2*10+int(s2[1]-48);
		if(d1==d2){
			c+=a;
			k1=int(s1[2]);
			k2=int(s2[2]);
			if((k1<='C'&&k2<='C')||(k1>'C'&&k2>'C')){
				c+=a;
					if((k1=='C'&&k2=='A')||(k1=='A'&&k2=='C')){
						c+=b;
					}
					else c+=a;	
			}
			else{
				for(int i=1;i<=2;i++){
					c+=b;	
				}
			}
		}
		else {
			for(int i=1;i<=3;i++){
				c+=b;	
			}
		}
	}
	else{
		for(int i=1;i<=4;i++){
			c+=b;	
		}
	}
	cout<<c;
	return 0;
} 
