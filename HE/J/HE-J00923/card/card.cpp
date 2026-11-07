#include <bits/stdc++.h>
using namespace std;
#define gc getchar()
#define pb push_back
typedef long long ll;
const int N=5e5+5;
ll rd() {
	ll x=0,f=1; char c=gc;
	for(;c<'0'||c>'9';c=gc)if(c=='-')f=-1;
	for(;c>='0'&&c<='9';x=x*10+c-'0',c=gc);
	return x*f;
}
ll n,m,a[N],d[N],lst[N],nxt[N],ans[N],cnt[N];
stack<int> st;
void solve() {
	for(int i=1;i<=n;i++) if(cnt[i]) ans[a[i]]=i;
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=rd(); m=rd();
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) lst[a[i]]=i;
	for(int i=1;i<=n;i++) if(lst[a[i]]==i) cnt[i]=1;

	bool ok=1;
	for(int i=1;i<n;i++) if(a[i]>a[i+1]) ok=0;
	if(ok) {solve(); return 0;}

	int p=0;
	for(int i=1;i<=n;i++) {
		if(cnt[i]==1&&cnt[i-1]==0) p=i;
		if(cnt[i]==0&&cnt[i-1]==1) for(int j=p;j<i;j++) nxt[j]=i;
	}
	for(int j=p;j<=n;j++) nxt[j]=n+1;
	for(int i=1;i<=n;i++) {
		for(int j=i;j<=n;) {
			if(cnt[j]==1) {
				d[j]++; d[nxt[j]]--; j=nxt[j];
			}
			else {
				d[j]++; d[j+1]--; j=lst[a[j]]+1;
			}
//			ans[a[j]]++; j=lst[a[j]]+1;
		}
	}
	for(int i=1;i<=n;i++) d[i]+=d[i-1];
	for(int i=1;i<=n;i++) ans[a[i]]+=d[i];
	for(int i=1;i<=m;i++) {
		cout<<ans[i];
		if(i==m) cout<<'\n';
		else cout<<' ';
	}
	return 0;
}
	/*for(int i=1;i<=n;i++) {
		if(cnt[a[i]]) {
			while(a[st.top()]!=a[i]) {
				ll pos=st.top(); st.pop();
				cnt[a[pos]]--; ans[a[pos]]+=i-pos;
			}
			ans[a[st.top()]]+=i-st.top();
			st.pop(); st.push(i);
		} else {
			st.push(i); cnt[a[i]]++;
		}
	}
	while(!st.empty()) {
		int pos=st.top(); st.pop();
		ans[a[pos]]+=pos;
	}*/
	/*for(int i=1;i<=n;i++) { //O(n^2)
		for(int j=i;j<=n;j++) {
			if(cnt[a[j]]) {
				while(a[st.top()]!=a[j]) {
					cnt[a[st.top()]]--; st.pop();
				}
				st.pop(); st.push(j);
			} else {
				st.push(j); cnt[a[j]]++;
			}
		}
		cout<<i<<": ";
		while(!st.empty()) {
			cout<<st.top()<<' ';
			ans[a[st.top()]]++; cnt[a[st.top()]]--; st.pop();
		}
		cout<<'\n';
	}*/
