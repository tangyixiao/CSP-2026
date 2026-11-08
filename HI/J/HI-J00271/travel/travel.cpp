#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		a=1;
		if(s2[0]+s2[1]==s4[0]+s4[1]){
			b=1;
			if(s2[2]<='C'&&s4[2]<='C'){
				c=1;
				if(abs(int(s2[2]-s4[2]))==1) d=1;
			} 
			else if(s2[2]>'C'&&s4[2]>'C'){
				c=1;
				if(abs(int(s2[2]-s4[2]))==1){
					d=1;
				} 
			}
		}
	}
	if(a==1) cout<<1;
	else cout<<0;
	if(b==1) cout<<1;
	else cout<<0;
	if(c==1) cout<<1;
	else cout<<0;
	if(d==1) cout<<1;
	else cout<<0;
	return 0;
}
