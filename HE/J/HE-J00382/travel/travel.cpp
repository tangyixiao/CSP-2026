#include<bits/stdc++.h>
using namespace std;
string ca,sa,cb,sb;
int cxa,cxb;
int pa,pb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ca>>sa>>cb>>sb;
	int x=ca[0]-'0';
	int y=ca[1]-'0';
	cxa=x*10+y;
	x=cb[0]-'0';
	y=cb[1]-'0';
	cxb=x*10+y;
	if(cxa==cxb){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	x=sa[0]-'0';
	y=sa[1]-'0';
	pa=x*10+y;
	x=sb[0]-'0';
	y=sb[1]-'0';
	pb=x*10+y;
	if(pb==pa){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if((sa[2]>='A'&&sa[2]<='C'&&sb[2]>='A'&&sb[2]<='C')||(sa[2]>='D'&&sa[2]<='E'&&sb[2]>='D'&&sb[2]<='E')){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	x=sa[2]-'A';
	y=sb[2]-'A';
	if(abs(x-y)==1){
		cout<<1;
	}else{
		cout<<"0";
	}
	return 0;
}
