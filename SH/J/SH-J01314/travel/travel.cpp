#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,total;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	getline(cin,total);
	a=total.substr(0,2);
	b=total.substr(3,3);
	c=total.substr(7,2);
	d=total.substr(10);
	string b2=b.substr(0,2);
	string d2=d.substr(0,2);
	if(a==c) cout<<1;
   	else cout<<0;
	if(a==c){
		if(b2==d2) cout<<1;
		else cout<<0;
	}else cout<<0;
	
	if(a==c){
		if(b2==d2){
			if((b[2]>='D' and b[2]<='F' and d[2]>='D' and d[2]<='F') or (b[2]<='C' and d[2]<='C')) cout<<1;
			else cout<<0;
		}
		else cout<<0;
	}else cout<<0;
	
	if(a==c){
		if(b2==d2){
			if((b[2]>='D' and b[2]<='F' and d[2]>='D' and d[2]<='F') or (b[2]<='C' and d[2]<='C')) {
				if(abs(b[2]-d[2])==1 or (b[2]=='D' and d[2]=='F') or (b[2]=='F' and d[2]=='D')) cout<<1;
				else cout<<0;
			}else cout<<0;
		}else cout<<0;
	}else cout<<0;
//02 01A 02 10B

}
