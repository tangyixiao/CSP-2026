#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
string s,t,a,b;
int p,q,n,m;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>t>>a>>b;
	if(s==a) cout<<1;
	else{
		cout<<"0000";
		exit(0);
	}
	if(t[0]==b[0]&&t[1]==b[1]) cout<<1;
	else{
		cout<<"000";
		exit(0);
	}
	if(max(t[2],b[2])<='C'||min(t[2],b[2])>='D') cout<<1;
	else{
		cout<<"00";
		exit(0);
	}
	if(min(t[2],b[2])>='D'||(max(t[2],b[2])<='C'&&abs(t[2]-b[2])==1)) cout<<1;
	else cout<<0;
	return 0;
}