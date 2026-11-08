#include<bits/stdc++.h>
using namespace std;
#define int long long
struct number{
	int num;
	vector <int> vis;
}b[32];
int a[200010];
bool vis[200010];
int n,m;
bool cmp(int a1,int a2){
	if(a[a1] != a[a2]) return a[a1] > a[a2];
	else return a1 < a2;
}
int sum = 0;
void dfs(int deep,int ans){
	if(deep == m - 1) sum = max(sum,ans);
	for(int i = 1;i <= n;i++){
		if(vis[i]) continue;
		vis[i] = 1;
		dfs(deep + 1,ans & a[i]);
		vis[i] = 0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i = 1;i <= n;i++)
		scanf("%lld",&a[i]);
	sort(a + 1,a + 1 + n);
	if(m == n - 1){
		int ans = a[2];
		for(int i = 3;i <= n;i++){
			ans &= a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m == 1){
		int ans = 0;
		for(int i = 1;i <= n;i++){
			ans = max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m == 2){
		int ans = 0;
		for(int i = 1;i <= n;i++){
			for(int j = i + 1;j <= n;j++){
				ans = max(ans,a[i] & a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	
	if(pow(n,m) > 0 && pow(n,m) < 1000000){
		vis[1] = 1;
		dfs(0,a[1]);
		cout<<sum;
		return 0;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 30;j >= 0;j--){
			if(a[i] & (1 << j)){
				b[j].num++;
				b[j].vis.push_back(i);
			}
		}
	}
	int ans = 0;
	for(int i = 30;i >= 0;i--){
		sort(b[i].vis.begin(),b[i].vis.end(),cmp);
		if(b[i].num >= m){
			ans += (1 << i);
			for(int k = 30;k >= 0;k--){
				for(int j = 0;j < m;j++){
					if(!(a[b[i].vis[j]] & (1 << k)))
						b[k].num--;
				}
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
