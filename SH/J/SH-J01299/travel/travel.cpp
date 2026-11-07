#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		a=1;
	}
	else{
		cout<<0;
	}
	if(s1[0]==s2[0] and s1[1]==s2[1] and a==1){
		cout<<1;
		b=1;
	}
	else{
		cout<<0;
	}
	if((s1[2]=='A' or s1[2]=='B' or s1[2]=='C') and (s2[2]=='A' or s2[2]=='B' or s2[2]=='C') and s1[2]!=s2[2]){
		c=1;
	}
	if((s1[2]=='D' or s1[2]=='F') and (s2[2]=='D' or s2[2]=='F') and s1[2]!=s2[2]){
		c=2;
	}
	if(a==1 and b==1 and (c==1 or c==2)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c==2){
		cout<<1;
	}
	else if((s1[2]=='A' or s1[2]=='B' or s1[2]=='C') and (s2[2]=='A' or s2[2]=='B' or s2[2]=='C') and a==1 and b==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
