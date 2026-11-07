#include<bits/stdc++.h>
using namespace std;
string c,s,ci,si;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>ci>>si;
	if(c!=ci){
		cout<<"0000";
		return 0;
	}
	if(s[0]!=si[0]||s[1]!=si[1]){
		cout<<"1000";
		return 0;
	}
	if((s[2]<='C')!=(si[2]<='C')){
		cout<<"1100";
		return 0;
	}
	if(abs(s[2]-si[2])!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}