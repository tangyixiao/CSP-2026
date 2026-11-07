#include <bits/stdc++.h>
#define lonit long long
using namespace std;
//const lonit MOD=1e9+7;
string ar1,ar2,ax1,ax2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>ar1>>ar2>>ax1>>ax2;
	if(ar1==ax1) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	int pr=10*(ar2[0]-'0')+(ar2[1]-'0');
	int px=10*(ax2[0]-'0')+(ax2[1]-'0');
	if(pr==px) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	int zwr=ar2[2]-'A',zwx=ax2[2]-'A';
	if((zwr<3&&zwx<3)||(zwr>=3&&zwx>=3)) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(abs(zwr-zwx)==1) cout<<1;
	else cout<<0;
	return 0;
}