#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll a[200009];
ll maxa = -1;
void solvem1(){
	ll ans = -1;
	for(int i=0; i<n; i++){
		ans = max(ans,a[i]);
	}
	cout << ans << endl;
}
void solvem2(){
	ll ans = -1;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			ll p = a[i] & a[j];
			if(p > ans){
				ans = p;
			}
		}
	}
	cout << ans << endl;
}
void solvemn(){
	ll ans = a[0];
	for(int i=0; i<n; i++){
		ans &= a[i];
	}
	cout << ans << endl;
}
void solvea4(){
	for(int i=maxa; i>0; i--,maxa--){
		int get = 0;
		for(int j=0; j<n; j++){
			if((i & a[j]) == i){
				get++;
			}
		}
		if(get >= m){
			cout << i << endl;
			return;
		}
	}
	cout << 0 << endl;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i] >= maxa){
			maxa = a[i];
		}
	}
	if(m==1){
		solvem1();
	}else if(m==2){
		solvem2();
	}else if(m==n){
		solvemn();
	}else if(maxa <= 4){
		solvea4();
	}else{
		cout << 0 << endl; 
	}
	
	return 0;
}
