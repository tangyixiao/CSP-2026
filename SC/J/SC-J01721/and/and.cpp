#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin >> n >> m;
	vector<ll> v(n);
	ll maxn = -1;
	for(int i = 0; i < n; i++){
		cin >> v[i];
		maxn=max(maxn,v[i]);
	}
	ll cnt = v[0];
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==n){
		for(int i = 1; i < n; i++){
			cnt=cnt&v[i];
		}
		cout<<cnt;
		return 0;
	}else{
		sort(v.begin(),v.end(),cmp);
		for(int i = 0; i < m; i++){
			if(i==0){
				cnt = v[0];
			}
			cnt=cnt&v[i];
		}	
		cout<<cnt;
	}
	return 0;
}