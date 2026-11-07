#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	char z11,z12,z13,z21,z22,z23;
	cin>>c1>>z11>>z12>>z13>>c2>>z21>>z22>>z23;
	if(c1==c2){
		cout<<1;
		if(z11==z21&&z12==z22){	
			cout<<1;
			if((z13<='C'&&z23<='C')||(z13>='D'&&z23>='D')){
				cout<<1;
				if(z13-z23==1||z23-z13==1)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}