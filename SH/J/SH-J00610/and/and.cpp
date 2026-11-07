#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
typedef long long ll;
int n,m,a[maxn],vis[maxn];
ll w[maxn][61],t[maxn],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		for(int j = 0;j<30;j++){
			w[i][j] = (a[i] & (1<<j)) / (1<<j);
			t[j] += w[i][j];
		}
	}
	for(int i = 29;i>=0;i--){
		if(t[i] >= m){
			for(int j = 1;j<=n;j++){
				if(w[j][i]){
					ans += w[j][i]*(1<<i);
					vis[j] = 1;
				} 
			}	
		}
		
	}
	cout<<ans;
}
