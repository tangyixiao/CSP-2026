#include<bits/stdc++.h>
using namespace std;
#define int long long
string a,b,c,d;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<2;i++){
		if(b[i]!=d[i]){
			cout<<"000";
			return 0;
		}
	}
	if(b[2]=='A'&&d[2]=='C'||d[2]=='A'&&b[2]=='C'){
		cout<<"110";
	}else if(b[2]>='D'&&b[2]<='E'&&d[2]>='D'&&d[2]<='E'){
		cout<<"111";
	}else if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C'){
		cout<<"111";
	}else{
		cout<<"100";
	}
	return 0;
}