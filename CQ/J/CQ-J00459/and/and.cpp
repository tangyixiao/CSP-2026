#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+5;
int n, m, a[maxn], ans;
int num[maxn][31], lb, s, can[maxn];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		lb=30;
		while(a[i]){
			num[i][lb]=a[i]%2;
			a[i]/=2;
			lb--;
		}
	}
	for(int w=1;w<=30;w++){
		ans<<=1;
		s=0;
		for(int i=1;i<=n;i++){
			if(can[i]==0){
				s+=num[i][w];
			}
		}
		if(s>=m){
			ans++;
			for(int i=1;i<=n;i++){
				if(num[i][w]==0){
					can[i]=1;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
T:O(nlog^2n)
M:52256 KB
*/
