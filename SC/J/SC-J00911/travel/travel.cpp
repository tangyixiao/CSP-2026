#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ca,cb,sa,sb;
char na,nb;
int a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	ca = c1[0]-'0'+c1[1]-'0';
	cb = c2[0]-'0'+c2[1]-'0';
	sa = s1[0]-'0'+s1[1]-'0';
	sb = s2[0]-'0'+s2[1]-'0';
	na = s1[2];
	nb = s2[2];
	if(ca==cb){
		a = 1;
		if(sa==sb){
			b = 1;
			if(((max(na,nb)-min(na,nb))==1)&&(max(na,nb)=='F')){
				c = 1,d = 1;
			}else if(max(na,nb)<='C'){
				c = 1;
				if(max(na,nb)-min(na,nb)==1){
					d = 1;
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}