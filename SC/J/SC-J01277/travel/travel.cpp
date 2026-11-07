#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,ans;
string a[5];
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	for(ll i=1; i<=4; i++) {
		cin>>a[i];
	}
	int x,y;
	x=(int)a[2][2]-'A';
	y=(int)a[4][2]-'A';
	if(a[1]!=a[3]){
		cout<<"0000";
		return 0;
	}
	else if(a[2][0]!=a[4][0]||a[2][1]!=a[4][1]){
		cout<<"1000";
		return 0;
	} 
	else if((x<=2&&y>2)||(x>2&&y<=2)) {
		cout<<"1100";
		return 0;
	}
	if(abs(x-y)==1){
		cout<<"1111";
		return 0;
	}
	if(abs(x-y)!=1){
		cout<<"1110";
		return 0;
	}

	return 0;
}