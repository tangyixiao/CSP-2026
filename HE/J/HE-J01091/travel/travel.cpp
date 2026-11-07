#include<bits/stdc++.h> 

using namespace std;

int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
	}
	else{
		cout<<0;
	}
	                            
	if(b=="01A" && d=="01B"){
		cout<<111;
	}
	if(b=="01B" && d=="01C"){
		cout<<111;
	}
	if(b=="01C" && d=="01D"){
		cout<<100;
	}
	if(b=="01D" && d=="01F"){
		cout<<111;
	}
	if(b=="02A" && d=="02B"){
		cout<<111;
	}
	if(b=="02B" && d=="02C"){
		cout<<111;
	}
	if(b=="02C" && d=="02D"){
		cout<<100;
	}
	if(b=="02D" && d=="02F"){
		cout<<111;
	}
	if(b=="03A" && d=="03B"){
		cout<<111;
	}
	if(b=="03B" && d=="03C"){
		cout<<111;
	}
	if(b=="03C" && d=="03D"){
		cout<<100;
	}
	if(b=="03D" && d=="03F"){
		cout<<111;
	}
	
	
	
		
	
	
	
	
	
	return 0;
}
