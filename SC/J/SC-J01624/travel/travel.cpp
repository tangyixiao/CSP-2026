#include<bits/stdc++.h>
#define int long long
#define endl '\n'
struct qq{
	int q,w;
	char e;
};
using namespace std;
qq a,b;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(0);
	cout.tie(nullptr);
	cin>>a.q>>a.w>>a.e>>b.q>>b.w>>b.e;
	if(a.q==b.q){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(a.w==b.w){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
		
	}
	if(((a.e=='A'||a.e=='B'||a.e=='C')&&(b.e=='A'||b.e=='B'||b.e=='C'))||((b.e=='D'||b.e=='F')&&(a.e=='D'||b.e=='F'))){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if((a.e!='C'&&b.e!='D')||(a.e!='D'&&b.e!='C')){
		if(a.e+1==b.e||a.e-1==b.e){
			cout<<"1";
		}
		else if((a.e=='C'&&b.e=='F')||(a.e=='F'&&b.e=='D')){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	return 0;
}