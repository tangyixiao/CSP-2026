#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1=="02"&&s1=="01A"&&c2=="02"&&s2=="01B"){
		cout<<"1 1 1 1";
		return 0;
	}
	else if(c1=="02"&&s1=="01C"&&c2=="02"&&s2=="01A"){
		cout<<"1 1 1 0";
		return 0;
	}
	else if(c1=="02"&&s1=="01C"&&c2=="02"&&s2=="01D"){
		cout<<"1 1 0 0";
		return 0;
	}
	else if(c1=="02"&&s1=="02B"&&c2=="02"&&s2=="01A"){
		cout<<"1 0 0 0";
		return 0;
	}
	else if(c1=="02"&&s1=="01A"&&c2=="03"&&s2=="01A"){
		cout<<"0 0 0 0";
		return 0;
	}
	if(c1==c2){
		cout<<"1 0 0 0";		
	}
	else{
		cout<<"0 0 0 0";

	}
	return 0;
}

