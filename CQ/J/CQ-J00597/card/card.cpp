#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int num[500005]; 
int cnt[500005];
queue<int>q;
bool check(int x){
	if(q.empty()){
		return 0;
	}
	int longs = q.size();
	for(int i = 1;i<=longs;i++){
		int nows = q.front();
		q.pop();
		q.push(nows);
		if(nows == x){
			return 1;
		}
	}
	return 0;
}

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> num[i];
	}
	for(int i = 1;i<=n;i++){
		for(int j = i;j<=n;j++){
			int now = num[j];
			if(check(now)){
				for(int i = 1;i<=2;i++){
					q.pop();
				}
				queue<int>qq;
				while(!q.empty()){
					bool bol = 1;
					int o = q.front();
					q.pop();
					if(o != now&&bol == 1){
						qq.push(o);
					}
					else{
						bol = 0;
					}
				}
				while(!qq.empty()){
					q.push(qq.front());
					qq.pop();
				}
			}
			q.push(now);
		}
		while(!q.empty()){
			int f = q.front();
			cnt[f]++;
			cout << f << " ";
			q.pop();
		}
		cout << endl;
	}
	for(int i = 1;i<=m;i++){
		cout << cnt[i] << " ";
	}
	return 0;
} 

