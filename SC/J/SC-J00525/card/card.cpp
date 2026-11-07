#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5+1;
const int M = 3e5+10;
int n,m,a[N],cnt[N];
ll ans;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)cin >> a[i];
	for(int i = 1; i <= n; i++){
		stack<int> q;
		vector<bool> t(n+1,0);
		for(int j = i; j <= n; j++){				
			if(t[a[j]]){
				while(!q.empty()){
					int x = q.top();
					t[x] = 0;
					if(x == a[j]){
						q.pop();
						break;
					}
					q.pop();
				}
			}				
			q.push(a[j]);
			t[a[j]]=1;
		}
		while(!q.empty()){
			int x = q.top();
			q.pop();
			cnt[x]++;
		}
	}
	for(int i = 1; i <= m; i++)
		cout << cnt[i] << ' ';	
	return 0;
}