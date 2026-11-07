#include<bits/stdc++.h>
using namespace std;
int main(){
	char a,b,c,d;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a='1';
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			b='1';
			char x=s1[2],y=s2[2];
			if((x=='F'||x=='D')&&(y=='C'||y=='B'||y=='A')){
				c='0';d='0';
			}
			else if((y=='F'||y=='D')&&(x=='C'||x=='B'||x=='A')){
				c='0';d='0';
			}
			else {
				c='1';
				if(abs(x-y)==1){
					d='1';
				}
				else d='0';
			}
		}
		else{
			d='0';
			c='0';
			b='0';	
		}
	}
	else {
		d='0';
		c='0';
		b='0';
		a='0';
	}
	cout<<a<<b<<c<<d;
	return 0;
}
