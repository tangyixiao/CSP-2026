#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const ll INF=1e18;

void solve(){
	string a1,a2,b1,b2;
	cin>>a1>>b1>>a2>>b2;
	string c1="",c2="";
	c1+=b1[0],c1+=b1[1];
	c2+=b2[0],c2+=b2[1];
	char d1=b1[2],d2=b2[2];
	
	bool type1=(d1=='A'||d1=='B'||d1=='C');
	bool type2=(d2=='A'||d2=='B'||d2=='C');
	if (a1!=a2){
		cout<<"0000";
		return ;
	}else if (c1!=c2){
		cout<<"1000";
		return ;
	}else if (type1!=type2){
		cout<<"1100";
		return ;
	}else if (d1+1!=d2){
		cout<<"1110";
		return ;
	}cout<<"1111";
	return ;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	solve();
	return 0;
}
