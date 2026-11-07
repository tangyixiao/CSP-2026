#include <bits/stdc++.h>
using namespace std;
string ra,rb,xa,xb;
void solve(){
	if(ra==xa) cout<<1;
	else{
	 	cout<<"0000";
	 	return;
	}
	
	if(rb[0]==xb[0]&&rb[1]==xb[1]) cout<<1;
	else{
		cout<<"000";
		return;
	} 
	
	if(rb[2]>='A'&&rb[2]<='C'&&xb[2]>='A'&&xb[2]<='C'||rb[2]>='D'&&rb[2]<='E'&&xb[2]>='D'&&xb[2]<='E'){
		cout<<1; 
	}
	else{
		cout<<"00";
		return;
	}
	
	if(rb[2]>xb[2]){
		if(rb[2]-xb[2]==1) cout<<1;
		else{
			cout<<"0";
			return;
		}
	}
	else{
		if(xb[2]-rb[2]==1) cout<<1;
		else{
			cout<<"0";
			return;
		}
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>ra>>rb>>xa>>xb;
	solve(); 
	return 0;
}