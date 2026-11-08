#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,x,y;
	char l1,l2;
	cin>>a>>x>>l1>>b>>y>>l2;
	if(a!=b) {
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(x==y) {
		cout<<"1";
		if((l1>='D'&&l2>='D')||(l1<='C'&&l2<='C')) {
			cout<<"1";
		} else {
			cout<<"0";
		}
	} else {
		cout<<"00";
	}
	if(l1==l2&&abs(x-y)==1) {
		cout<<"1";
	} else if(x==y) {
		if((abs(l1-l2)!=1)||(l1=='C'&&l2=='D')||(l1=='D'&&l2=='C')) {
			cout<<"0";
		} else {
			cout<<"1";
		}
	} else {
		cout<<"0";
	}
	//system("FC.exe XXX.out XXX.ans");
	return 0;
}

