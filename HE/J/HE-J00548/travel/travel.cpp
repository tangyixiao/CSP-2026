#include<bits/stdc++.h>
#define int long long
using namespace std;
int c,ci;
string s,si;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>ci>>si;
	if(c==ci){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(s[0]+s[1]==si[0]+si[1]){
		cout<<1;	
	}
	else{
		cout<<"000";
		return 0;
	}
	if((s[2]>='A' && s[2]<='C' && si[2]>='A' && si[2]<='C') || (s[2]>='D' && s[2]<='F' && si[2]>='D' && si[2]<='F')){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(s[2]+1==si[2] || s[2]-1==si[2]){
		cout<<1;
	}
	else{
		cout<<0;
		return 0;
	}
	return 0;
}
