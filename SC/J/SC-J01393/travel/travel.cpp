#include<bits/stdc++.h>
#define AC return 0
using namespace std;
typedef long long ll;
static ll qpow(ll x,ll k,ll mod){
	ll res=1;
	while(k){
		if(k&1)res=res*x%mod;
		x=x*x%mod;
		k>>=1;
	}
	return res;
}
static ll qpow(ll x,ll k){
	ll res=1;
	while(k){
		if(k&1)res=res*x;
		x=x*x;
		k>>=1;
	}
	return res;
}
struct sets{
	string cx,wz;
};
bool is_near(char a,char b){
	if(a+1==b||b+1==a)return 1;
	return 0; 
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	sets x,y;
		cin>>x.cx>>x.wz>>y.cx>>y.wz;
		if(x.cx!=y.cx){
			cout<<"0000\n";
			return 0;
		}
		string ans="1";
		if(x.wz[0]==y.wz[0]&&x.wz[1]==y.wz[1])ans.push_back('1');
		else{
			cout<<"1000\n";
			return 0;
		}
		if(((x.wz[2]=='A'||x.wz[2]=='B'||x.wz[2]=='C')&&(y.wz[2]=='A'||y.wz[2]=='B'||y.wz[2]=='C'))||((x.wz[2]=='E'||x.wz[2]=='F')&&(y.wz[2]=='E'||y.wz[2]=='F')))ans.push_back('1');
		else{
			cout<<"1100\n";
			return 0;
		}
		if(is_near(x.wz[2],y.wz[2]))cout<<"1111\n";
		else cout<<"1110\n";
	AC;
}