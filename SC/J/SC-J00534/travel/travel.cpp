#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	string c,s,cc,ss;
	cin>>c>>s>>cc>>ss;
	if(c==cc){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	int a=s[0]*10+s[1],aa=ss[0]*10+ss[1];
	if(a==aa){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(s[2]>ss[2]) swap(s[2],ss[2]);
	if(s[2]<='C' && ss[2]>='D'){
		cout<<"00";
		return 0;
	}else{
		cout<<1;
	}
	if(s[2]+1==ss[2] || (s[2]=='D' && ss[2]=='F')){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}