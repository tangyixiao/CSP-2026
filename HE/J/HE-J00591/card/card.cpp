#include <bits/stdc++.h>
using namespace std;
int n,m,ans[300050],a[500050],cnt[300050];
bool valid[300050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		stack<int> q;
		memset(valid,false,sizeof(valid));
		memset(cnt,0,sizeof(cnt));
		for(int j = i;j <= n;j++){
			if(cnt[a[i]] != 0){
				while(q.top() != a[i]){
					cnt[q.top()]--;
					q.pop();
				}
			}else {
				q.push(a[i]);
				cnt[a[i]]++;
			}
		}
		while(!q.empty()){
			valid[q.top()] = true;
			q.pop();
		}
		for(int i = 1;i <= m;i++){
			ans[i] += valid[i];
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << ' ';
	}
	return 0;
}
