#include<bits/stdc++.h>
using namespace std;
	string r1;
	char r2[2]={0};
	string x1;
	char x2[2]={0};
void cmp(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r1>>r2>>x1>>x2;
	if(r1==x1){
		cout<<"1";
	}
	else {
		cout<<"0000";
		return;
	}
	if(r2[0]==x2[0]&&r2[1]==x2[1]){
		cout<<"1";
	}
	else {
		cout<<"000";
		return;
	}
	if(max(r2[2],x2[2])-min(r2[2],x2[2])<=2&&r2[2]+x2[2]!='C'+'D'
	&&r2[2]+x2[2]!='C'+'F'){
		cout<<"1";
	}
	else {
		cout<<"00";
		return;
	}
	if(max(r2[2],x2[2])-min(r2[2],x2[2])==1){
		cout<<"1";
	}
	else cout<<"0";
	return;
}
int main(){
	cmp();
	return 0;//Trick||Treat!
}
