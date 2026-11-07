#include<bits/stdc++.h>
using namespace std;
bool f1(char x){
	if(x>='A'&&x<='C') return true;
	return false;
}
int f2(char x){
	if(x>='A'&&x<='D') return x-'A'+1;
	return 5;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ax,ap,bx,bp;
	cin>>ax>>ap>>bx>>bp;
	if(ax!=bx){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(ap[0]!=bp[0]||ap[1]!=bp[1]){
		cout<<"000";
		return 0;
	}
	cout<<1;
	int ac=f1(ap[2]),bc=f1(bp[2]);
	if(ac!=bc){
		cout<<"00";
		return 0;
	}
	cout<<1;
	ac=f2(ap[2]),bc=f2(bp[2]);
	if(abs(ac-bc)!=1) cout<<0;
	else cout<<1;
	return 0;
} 