#include <bits/stdc++.h>
#define int long long
using namespace std;
string c11,s11,c22,s22;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>c11>>s11>>c22>>s22;
	if(c11!=c22){
		cout<<"0000";
		return 0;
	}
	if(s11[0]!=s22[0]||s11[1]!=s22[1]){
		cout<<"1000";
		return 0;
	}
	if((s11[2]<='C'&&s22[2]>'C')||(s11[2]>'C'&&s22[2]<='C')){
		cout<<"1100";
		return 0;
	}
	if((s11[2]-'A')-(s22[2]-'A')==1||(s11[2]-'A')-(s22[2]-'A')==-1){
		cout<<"1111";
		return 0;
	}
	else{
		cout<<"1110";
		return 0;
	}
	return 0;
} 