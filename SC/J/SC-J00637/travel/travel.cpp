#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
string a,b,c,d;
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<0000;
		return 0;
	}
	cout<<1;
	bool f=0,ff=0;
	if(b[0]==d[0]&&b[1]==d[1]){
		cout<<1;
		f=1;
	}else{
		cout<<0;
	}
	if(f&&((b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')||(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F'))){
		cout<<1;
		ff=1;
	}else {
		cout<<0;
	}
	if(f&&ff&&abs(b[2]-d[2])==1){
		cout<<1;
	}else {
		cout<<0;
	}
}