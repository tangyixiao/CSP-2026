#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,a,b;
	cin>>c>>s>>a>>b;
	string ans;
	if(c!=a){
		cout<<"0000";
	}else if(s[0]!=b[0]||s[1]!=b[1]){
		cout<<"1000";
	}else if(!(s[2]<='C'&&b[2]<='C')||!(s[2]<='D'&&b[2]<='D')){
		cout<<"1100";
	}else if(s[2]+1!=b[2]&&b[2]+1!=s[2]){
		cout<<"1110";
	}else cout<<"1111";
	return 0;
}
