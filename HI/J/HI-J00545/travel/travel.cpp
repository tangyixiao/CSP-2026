#include<bits/stdc++.h>
using namespace std;
int n[3];
string m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n[1]>>m[0]>>m[1]>>m[2];
	cin>>n[2]>>m[3]>>m[4]>>m[5];
	if(n[1]==n[2]){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(m[0]==m[3]&&m[1]==m[4]){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	if((m[2]<='C'&&m[5]<='C')||(m[2]>'C'&&m[5]>'C')){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if(m[2]-m[5]==1||m[2]-m[5]==-1)cout<<"1";
	else{
		cout<<"0";
	}
	return 0;
} 