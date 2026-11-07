#include <bits/stdc++.h> 
using namespace std;
char rx[20],rw[25],xx[20],xw[25];
char sa[5],sb[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int rc,rs,xc,xs;
	sa[1]='A';
	sa[2]='B';
	sa[3]='C';
	sb[1]='D';
	sb[2]='E';
	for(int i=1;rx[i]!='@';i++){
		cin>>rx[i];
	}
	for(int i=1;rw[i]!='@';i++){
		cin>>rw[i];
	}
	for(int i=1;xx[i]!='@';i++){
		cin>>xx[i];
	}
	for(int i=1;xw[i]!='@';i++){
		cin>>xw[i];
	}
	for(int i=1;i<=3;i++){
		if(sa[i]==rx[3]) {
			rc=i;
			rs=1;
		}
		if(sa[i]==xx[3]){
			xc=i;
			xs=1;
		} 
}
		for(int i=1;i<=2;i++){
		if(sb[i]==rx[3]) {
			rc=i;
			rs=2;
		}
		if(sb[i]==xx[3]){
			xc=i;
			xs=2;
		} 
	}
	if(rx[2]==xx[2]) cout<<"1"<<" ";
	else cout<<"0"<<" ";
	if(rw[2]==xw[2] && rx[2]==xx[2]) cout<<"1"<<" ";
	else cout<<"0"<<" ";
	if(rw[2]==xw[2] && rx[2]==xx[2] && xs==rs) cout<<"1"<<" ";
	else cout<<"0"<<" ";
	if(rw[2]==xw[2] && rx[2]==xx[2] && xs==rs && rc==xc) cout<<"1"<<" ";
	else cout<<"0"<<" ";
	return 0;
}
