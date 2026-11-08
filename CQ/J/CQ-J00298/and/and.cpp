#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n,m,a[N],t[N],xb,new_t[N],ans,_2[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	_2[0] = 1;
	for(int i=1;i<=31;i++){
		_2[i] = _2[i-1] * 2;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=30;i>=0;i--){
		xb = 0;
		for(int j=1;j<=n;j++){
			t[++xb] = a[j];
		}
		long long tmp = 0;
		for(int j=i;j>=0;j--){
			int new_xb = 0;
			for(int k=1;k<=xb;k++){
				if((t[k] & _2[j]) != 0){
					new_t[++new_xb] = t[k];
				}
			}
			if(new_xb >= m){
				tmp |= _2[j]; 
				for(int k=1;k<=new_xb;k++){
					t[k] = new_t[k];
				}
				xb = new_xb;
			}
		}
		ans = max(ans,tmp);
	}
	cout<<ans;
	return 0;
}
/*
100pts
O(30*30*n)
6864KB
*/
