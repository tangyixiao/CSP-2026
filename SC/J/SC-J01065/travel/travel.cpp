#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
string a,b,c,d;
int sam=0,cut=0,n=0,m=0;
cin>>a>>b>>c>>d;
for(int i=0;i<2;i++){ 
	if(a[i]==c[i]){
		sam++;
	}
	if(b[i]==d[i]){
		cut++;
	}
	
	if(sam==2){
		cout<<1;
	}
}
   if(sam!=2){
   	cout<<"0000";
   	return 0;
  }
    if(b[0]==d[0]&&b[1]==d[1]){
		cut=2;
		cout<<1;
	}
	if(cut==2){
		n++;
	}
	 if((b[2]>='A'&&b[2]<='C')&&(d[2]>='A'&&d[2]<='C')){
	 	n++;
	 }
	 else if((b[2]>='D'&&b[2]<='F')&&(d[2]>='D'&&d[2]<='F')){
	 	n++;
	 }
	    if(n==2){
	 	cout<<1;
	 }
	 if(n==2){
	 	m++;
	 }
	 if((b[2]>='D'&&b[2]<='F')&&(d[2]>='D'&&d[2]<='F')){
	 	m++;
	 }
	 else if((b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='C')||(d[2]=='A'&&b[2]=='B')||(d[2]=='B'&&b[2]=='C')){
	 	m++;
	 }
	 if(m==2){
	 	cout<<1;
	 }
	 if(sam!=2){
	 	cout<<0;
	 }
	 if(cut!=2){
	 	cout<<0;
	 }
	 if(n!=2){
	 	cout<<0;
	 }
	 if(m!=2){
	 	cout<<0;
	 }
   return 0;
 }