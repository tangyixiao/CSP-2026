#include<bits/stdc++.h>
using namespace std;
vector< pair<long long,char> > a;
int main() {
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1);
	vector< vector<int> > vis(40);
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		int x=a[i];
		vector<int> k;
		int cnt=0;
		while(x>0) {
			cnt++;
			k.push_back(x%2);
			x/=2;
		}
		reverse(k.begin(),k.end());
		for(int j=0; j<cnt; j++) {
			if(k[j])vis[j].push_back({a[i]});
		}
	}
	for(int i=32; i>=0; i++) {
		if(vis[i].size()>=m) {
			vector< vector<int> > b;
			for(int j=0; j<=vis.size(); j++) {
				int x=vis[i][j];
				vector<int> k;
				int cnt=0;
				while(x>0) {
					cnt++;
					k.push_back(x%2);
					x/=2;
				}
				reverse(k.begin(),k.end());
				for(int l=0; l<cnt; l++) {
					if(k[l])b[l].push_back({vis[i][j]});
				}
				for(int r=32; r>=0; r++) {
					if(b[r].size()>=m) {
						int ans=b[r][0];
						for(int p=1; p<b[r].size(); p++) {
							ans&=b[r][p];
						}
						cout<<ans;
						return 0;
					}
				}
			}

		}
	}
	cout<<0;
}