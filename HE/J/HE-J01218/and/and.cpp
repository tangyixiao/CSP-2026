#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long a[N],ans,n,m,dp[N][500],sum,len;
vector<vector<long long> > v(40);
vector<long long> an,bn,clea;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i]; 
		if(n == m){
			if(i == 1){
				ans = a[i];
			}else{
				ans = ans & a[i];
			}
		}else{
			for(int j = 1;(1 << (j - 1)) <= a[i];j ++){
				if((1 << (j - 1)) & a[i]){
					v[j].push_back(i);
				}
			}
		}
	}
//	for(int i = 1;i <= 31;i ++){
//		cout << i << ": ";
//		for(int j = 0;j < (int)v[i].size();j ++){
//			cout << v[i][j] << " ";
//		}cout << '\n';
//	}
	if(n == m){
		cout << ans << '\n';return 0;
	}else{
		for(int i = 32;i >= 1;i --){
			sum = (1 << (i - 1));
			if((int)v[i].size() >= m && (int)an.size() == 0){
				an = v[i];
				ans += sum;
			}else if((int)v[i].size() >= m && (int)an.size() != 0){
				len = an.size();
				bn = clea;
				for(int j = 0;j < (int)an.size();j ++){
					long long k = lower_bound(v[i].begin(),v[i].end(),an[j]) - v[i].begin();
					if(v[i][k] != an[j]){
						len --;
					}else{
						bn.push_back(an[j]);
					}
					if(len < m) break;
				}
				if(len >= m){
					ans += sum;
					an = bn;
				}
			}
		} 
		cout << ans;
	}
	
	return 0;
}
