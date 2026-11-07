#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5 + 10;
int n,m;
int a[N];
int cnt[N],ans[N];
bool vis[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
	}
	for(int k = 1;k <= n;k ++){
		for(int i = 1;i <= m;i ++)cnt[i] = 0;
		for(int i = 1;i <= n;i ++)vis[i] = 0;
		for(int i = k;i <= n;i ++){
			cnt[a[i]] ++;
			ans[a[i]] ++;
			if(cnt[a[i]] == 2){
				for(int j = i - 1;j >= k;j --){
					if(vis[j])continue;
					vis[j] = 1;
					cnt[a[j]] --;
					ans[a[j]] --;
					if(a[j] == a[i])break;
				}
			}
		}
	}
	for(int i = 1;i <= m;i ++)cout << ans[i] << " ";
	return 0;
}
// 4 3 1 2 1 3
