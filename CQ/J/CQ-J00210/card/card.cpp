#include <bits/stdc++.h>
#define N 500010
#define M 300010
#define debug(x) cout<<#x<<" = "<<x<<" "
using namespace std;

int n,m;
int a[N],st[N],ans[N];

void init(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
}

void solve(){
	stack<int> num;
	for(int l=1;l<=n;l++){
		for(int i=l;i<=n;i++){
//			debug(i)<<endl;
			if(st[a[i]] != 0){
				while(1){
					int val=num.top();
					st[val]=0,num.pop();
//					debug(i),debug(val)<<endl;
					if(val == a[i]) break; 
				}
			}
			num.push(a[i]),st[a[i]]=1;
		}
		
		while(!num.empty()) ans[num.top()]++,st[num.top()]=0,num.pop();
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
}

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	init();
	solve();
	return 0;
}
