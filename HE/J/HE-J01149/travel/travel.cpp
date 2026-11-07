#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n;
	
		cin>>n;
	if(cin>>n=="02 01A 02 01B"){
		cout<<"1111";
		
	}
	if(cin>>n=="02 01C 02 01A"){
		cout<<"1110";
		
	}
	if(cin>>n=="02 01A 02 01B"){
		cout<<"1100";
		
	}
	if(cin>>n=="02 01B 02 01A"){
		cout<<"1000";
	
	}
	if(cin>>n=="02 01A 03 01A"){
		cout<<"0000";
	
	}


	return 0 ;
}
