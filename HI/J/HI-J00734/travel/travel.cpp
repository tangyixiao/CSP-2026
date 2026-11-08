#include <bits/stdc++.h>
using namespace std;
int n,c;
string m,s;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>m>>c>>s;
	if(n!=c){
		cout<<"0000";
		return 0;
	}
	ans+='1';
	if(m[0]!=s[0]||m[1]!=s[1]){
		cout<<ans<<"000";
		return 0;
	}
	ans+='1';
	if(m[2]=='D'&&s[2]=='C'){
		cout<<ans<<"00";
		return 0;
	}
	if(s[2]=='D'&&m[2]=='C'){
		cout<<ans<<"00";
		return 0;
	}
	ans+='1';
	if(abs(m[2]-s[2])!=1){
		cout<<ans<<'0';
		return 0;
	}
	ans+='1';
	cout<<ans;
	
	return 0;
}

