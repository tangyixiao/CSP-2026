#include<bits/stdc++.h>
using namespace std;
string sn,sm,nnnn,nmnm;
string a,b,c,d;
int t,f,l;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sn>>sm>>nnnn>>nmnm;
	if(sn==nnnn){
		l=1;
		cout<<1;	
	}
	else cout<<0;
	a=a+sm[0];
	a=a+sm[1];
	b=b+nmnm[0];
	b=b+nmnm[1];
	if(a==b&&l==1) cout<<1;
	else cout<<0;
	c=sm[2];
	d=nmnm[2];
	if(((c=="A")&&(d=="C"||d=="B"))||((c=="B")&&(d=="C"||d=="A"))||((c=="C")&&(d=="A"||d=="B"))){
		if(a==b&&l==1){
			t=1;
			cout<<1;
		}	
	}
	if(((c=="F")&&(d=="D"))||((c=="D")&&(d=="F"))){
		if(t==0&&a==b&&l==1){
			t=1;
			cout<<1;
		}
	}
	if(t==0) cout<<0;
	if(((c=="A")&&(d=="B"))||((c=="B")&&(d=="C"||d=="A"))||(c=="C"&&d=="B")){
		if(a==b&&l==1){
			f=1;
			cout<<1;
		}
	}
	if((c=="D"&&d=="F")||(c=="F"&&d=="D")){
		if(f==0&&a==b&&l==1){
			f=1;
			cout<<1;
		}
	}
	if(f==0) cout<<0;
	return 0;
} 
