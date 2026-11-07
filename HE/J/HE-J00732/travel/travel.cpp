#include<bits/stdc++.h>
using namespace std;
void solve(){
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
	}else{
		cout<<"0000";
		return;	
	}
	if(b[0]==d[0]&&b[1]==d[1]){
		cout<<1;
	}else{
		cout<<"000";
		return;
	}
	if(((b[2]>='A'&&b[2]<='C')&&(d[2]>='A'&&d[2]<='C'))||((b[2]>='E'&&b[2]<='F')&&(d[2]>='E'&&d[2]<='F'))){
		cout<<1;
	}
	else{
		cout<<"00";
		return;
	}
	if(min(b[2],d[2])+1==max(b[2],d[2])){
		cout<<1;
	}else{
		cout<<"0";
		return;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	solve();
	return 0;
} 
