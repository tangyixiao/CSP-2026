#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int Rcx,Xcx;
	string Rzw,Xzw;
	cin>>Rcx>>Rzw>>Xcx>>Xzw;
	if(Rcx==Xcx){
		cout<<1;
		string Rpai=Rzw.substr(0,2),Xpai=Xzw.substr(0,2);
		if(Rpai==Xpai){
			cout<<1;
			char Rid=Rzw[2],Xid=Xzw[2];
			if('A'<=Rid&&Rid<='C'&&'A'<=Xid&&Xid<='C'||'D'<=Rid&&Rid<='F'&&'D'<=Xid&&Xid<='F'){
				cout<<1;
				if(Rid=='A'&&Xid=='B'||Rid=='B'&&Xid=='A'||Rid=='B'&&Xid=='C'||Rid=='C'&&Xid=='B'||Rid=='D'&&Xid=='F'||Rid=='F'&&Xid=='D')cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";	
	}
	else cout<<"0000";
	return 0;
}