#include<bits/stdc++.h>
using namespace std;
int a=0,b=0,c=0,d=0;
int q,w;
string s,ss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>q>>s>>w>>ss;
	 if(q==w){
	 	a=1;
		 if(ss[0]==s[0]&&ss[1]==s[1]){
	 		b=1;
	 		if((ss[2]=='B'||ss[2]=='C'||ss[2]=='A')&&(s[2]=='B'||s[2]=='C'||s[2]=='A')){
	 				c=1;
	 				int m=int(ss[2]);
	 				int n=int(s[2]);
	 				if(m-n==1||n-m==1){
	 					d=1;
					}
			 }else{
			 	if(s[2]=='F'||s[2]=='D'&&ss[2]=='F'||ss[2]=='D'){
	 				c=1;
	 				int m=int(ss[2]);
	 				int n=int(s[2]);
	 				if(m-n==1||n-m==1){
	 					d=1;
					 }
				 }
			 }
		 }
	 }
	 if((s[2]=='C'||ss[2]=='D')&&c==1){
	 	c=0;
	 	d=0;
	 }
	 cout<<a<<b<<c<<d; 
	return 0;
}