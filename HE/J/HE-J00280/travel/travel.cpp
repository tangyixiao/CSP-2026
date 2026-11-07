#include<bits/stdc++.h> 
using namespace std;
int main(){

	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2,c="";
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		c+='1';
		if(a2[0]==b2[0]&&a2[1]==b2[1]){
			c+='1';
			if((a2[2]<='C'&&b2[2]<='C')||(a2[2]>'C'&&b2[2]>'C')){
				c+='1';
				if((a2[2]+1==b2[2]||a2[2]-1==b2[2])){
					if((a2[2]=='D'&&b2[2]=='C')||(a2[2]=='C'&&b2[2]=='D')){
						c+='0';
					}else c="1111";
				}else c+='0';
			}else c="1100";
		}else c="1000";
	}else c="0000";
	cout<<c;
	return 0;
}
