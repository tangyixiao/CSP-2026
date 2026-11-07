#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

const int N=5e5 + 5;
struct range{
	int l,r;
};
int a[N],cnt[N],last[N],ans[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=1;i <= n;i++){
		cin >> a[i];
		last[a[i]]=i;
	}
	for(int i=1;i <= n;i++){
		cnt[i]++;
		cnt[last[a[i]] + 1]+=cnt[i];
	}
	for(int i=1;i <= n;i++){
		ans[a[i]]+=cnt[i];
	}
	for(int i=1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}