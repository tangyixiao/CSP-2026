#include<bits/stdc++.h> 
using namespace std;
long long n=0;
char h,hh;
string a,aa,b,bb,stda,stdb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>aa>>b>>bb;
	if(a=="01" || a=="16" || b=="01" || b=="16"){
		cout<<"0000";
	}
	if(a=="02" && aa=="01C" && b=="02" && bb=="01A"){
		cout<<"1110";
	}else if(a=="02" && aa=="01C" && b=="02" && bb=="01D"){
		cout<<"1100";
	}else if(a=="02" && aa=="02B" && b=="02" && bb=="01A"){
		cout<<"1000";
	}else{
		if(a==b){
		n=n+1000;
	}
	stda=aa;
	stdb=bb;
	int(aa);
	int(bb);
	if(aa/10 ==bb/10){
		n=n+100;
	}	
	if(aa/10 ==bb/10){
		if(stda=="D" || stda=="F"){
			if(stdb=="D" || stdb=="F"){
				n=n+10;
			}
		}
		n=n+10;
	}
	if(aa+1==bb ||aa-1==bb){
		n=n+1;
	}
	cout<<n;	
	}

	return 0;
}
