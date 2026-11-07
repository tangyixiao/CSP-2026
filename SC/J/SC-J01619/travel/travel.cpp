#include<bits/stdc++.h>
using namespace std;
string rt,rs,xt,xs;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(0);
	cout.tie(nullptr)->sync_with_stdio(0);
	cin>>rt>>rs>>xt>>xs;
	if(rt!=xt){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(rs[1]!=xs[1]){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if((rs[2]>'C'&&xs[2]<='C')||(rs[2]<='C'&&xs[2]>'C')){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if((abs(rs[2]-xs[2])==1)||(rs[2]>'C'&&xs[2]>'C')) cout<<"1";
	else cout<<"0";
	return 0;
}