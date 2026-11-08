#include<bits/stdc++.h>
using namespace std;
using t64 = long long;
t64 get(t64 cl,t64 k){
	return (cl>>(k-1))&1;
}
t64 n,m,ans;
t64 a[200005];
t64 check[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >>m;
	for(int i=1;i<=n;i++)cin >> a[i];
	for(int i=35;i>=1;i--){
		t64 cnt1 = 0;
		for(int j=1;j<=n;j++){
			if(!check[j]){
				cnt1+=get(a[j],i);
//				cout << get(a[j],i) << ' ';
			}
		}
//		cout << '\n';
		ans <<=1;
		if(cnt1>=m)
			ans|=1;
		for(int j=1;j<=n;j++){
			if(!check[j]){
				if((cnt1>=m)!=get(a[j],i))check[j]=1;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
/*
4 2
3 15 12 12
*/
