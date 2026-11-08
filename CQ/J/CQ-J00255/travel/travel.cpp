#include<bits/stdc++.h>
#define int long long
using namespace std;
string a,b,c,d;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	if(c[0]!=d[0]||c[1]!=d[1]){
		cout<<"1000";
		return 0;
	}
	if((c[2]<='C'&&d[2]>'C')||(c[2]>'C'&&d[2]<='C')){
		cout<<"1100";
		return 0;
	}
	if(c[2]!=(char)(d[2]+1)&&c[2]!=(char)(d[2]-1)){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
