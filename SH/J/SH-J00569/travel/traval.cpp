#include <bits/stdc++.h>
using namespace std;
string r,rc,x,xc;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r>>rc>>x>>xc;
	if(r==x ){
		cout<<1;
	}else{
		cout<<0;
	}
	if(rc[0]==xc[0] && rc[1]==xc[1]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	if(rc<="C" && xc<"D" ){
		cout<<1;
		if(abs(rc[2]-xc[2])==1){
			cout<<1;
		}else{
			cout<<0;
		}
		
	}
	else if(rc<="F" && xc<="F" && rc>="D" && xc>="D"){
		cout<<1;
		if(abs(rc[2]-xc[2])==1){
			cout<<1;
		}else{
			cout<<0;
		}
		
	}
	else{
		cout<<0;
		cout<<0;
	}
	return 0;
} 
