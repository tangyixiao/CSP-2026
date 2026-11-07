#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ls1,ls2,zw1,zw2;
	cin>>ls1>>zw1>>ls2>>zw2;
	if(ls1==ls2){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	if(zw2[0]==zw1[0]&&zw1[1]==zw2[1]){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	if((zw1[2]>'C'&&zw2[2]>'C')||(zw1[2]<='C'&&zw2[2]<='C')){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		return 0;
	}
	if (zw1[2]-zw2[2]==1||zw2[2]-zw1[2]==1){
		cout<<1;
	}else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}