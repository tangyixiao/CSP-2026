#include<bits/stdc++.h>
using namespace std;
string a,b,aa,bb;
bool c=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>aa>>bb;
	int aint=(a[0]-'0')*10+(a[1]-'0'),aaint=(aa[0]-'0')*10+(aa[1]-'0');
	if(aint==aaint){
		cout<<'1';
	}else{
		cout<<"0000";
		return 0;
	}
	if(b[0]==bb[0] && b[1]==bb[1]){
		cout<<'1';
	}else{
		cout<<"000";
		return 0;
	}
	if(b[2]>='A' && b[2]<='C' && bb[2]>='A' && bb[2]<='C'){
		c=1;
	}else if(b[2]>='D' && b[2]<='F' && bb[2]>='D' && bb[2]<='F'){
		c=1;
	}
	if(c==1){
		cout<<'1';
	}else{
		cout<<"00";
		return 0;
	}
	if(b[2]=='C' && bb[2]=='D'){
		cout<<'0';
		return 0;
	}else if(bb[2]=='C' && b[2]=='D'){
		cout<<'0';
		return 0;
	}
	if(b[2]+1==bb[2] || bb[2]+1==b[2]){
		cout<<'1';
	}else{
		cout<<'0';
	}
	return 0;
} 
