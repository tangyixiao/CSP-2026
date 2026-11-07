#include<bits/stdc++.h>
using namespace std;
string as,bs;
int ac,bc;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ac>>as>>bc>>bs;
	if(ac==bc){
		cout<<"1";
	}else{
		cout<<"0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(as[0]==bs[0]&&as[1]==bs[1]){
		cout<<"1";
	}else{
		cout<<"000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(as[2]<='C'&&bs[2]<='C'){
		cout<<"1";
	}else if(as[2]>'C'&&bs[2]>'C'){
		cout<<"1";
	}else{
		cout<<"00";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(as[2]-1==bs[2]||as[2]+1==bs[2]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

