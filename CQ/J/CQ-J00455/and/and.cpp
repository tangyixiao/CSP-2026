#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,a[N];
vector<int> pos,cur;
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++) pos.push_back(a[i]);
	for (int j=31;j>=0;j--) {
		int sum=0;
		for (int i:pos) {
			if ((i>>j)&1) sum++;
		}
		if (sum>=m) {
			for (int i:pos) {
				if ((i>>j)&1) cur.push_back(i);
			}
			pos.clear();
			for (int i:cur) pos.push_back(i);
			cur.clear();
		}
	}
	int ans=pos[0];
	for (int i=1;i<pos.size();i++) ans=ans&pos[i];
	cout<<ans;
	return 0;
}

