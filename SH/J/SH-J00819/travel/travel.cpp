#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cx1,zw1,cx2,zw2;
	bool op1,op2;
	cin>>cx1>>zw1>>cx2>>zw2;
	if(cx1==cx2) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0; 
	}
	if(zw1[0]==zw2[0]&&zw1[1]==zw2[1]){
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if('A'<=zw1[2]&&zw1[2]<='C') op1=0;
	else op1=1;
	if('A'<=zw2[2]&&zw2[2]<='C') op2=0;
	else op2=1;
	if(op1==op2) cout<<1;
	else{
		cout<<0<<0;
		return 0;
	}
	if(abs(zw1[2]-zw2[2])==1) cout<<1;
	else cout<<0;
	return 0;
}
