#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 500005;
const int M = 300005; 
int n,m,a[N],cnt[M];
bool used[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		deque<int> dq;
		for(int j=i;j<=n;j++){
			if(used[a[j]]){
				while(!dq.empty()){
					int x=dq.back();
					dq.pop_back();
					used[x]=false;
					if(x==a[j])break;
				}
			}
			dq.push_back(a[j]);
			used[a[j]]=true;
		}
		while(!dq.empty()){
			int x=dq.back();
			dq.pop_back();
			used[x]=false;
			cnt[x]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
