//CSP-J2026 C by wyyinput
//Task name: and
//Date: 2026/10/31
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pii pair<int,int>
#define pli pair<ll,int>
#define pil pair<int,ll>
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
const int N=2e5+55;
int n,m;
int a[N];
multiset<int> s;
int ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j:s){
			cnt+=(j>>i)&1;
		}
		if(cnt>=m){
			ans+=1<<i;
			for(int j=1;j<=n;j++){
				if(!((a[j]>>i)&1)){
					s.erase(a[j]);
				}
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}