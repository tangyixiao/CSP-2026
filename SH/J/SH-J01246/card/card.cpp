#include<bits/stdc++.h>
const int N=5e3+7;
using namespace std;

struct node {
	int ist;
	int pos=-1;
} st[N];

int ans[N],a[N];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	vector<int> tab;
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			int k=a[j];
			if(st[k].ist==0) {
				st[k].ist=1;
				st[k].pos=tab.size();
				tab.push_back(k);
			} else {
				for(int h=st[k].pos+1; h<tab.size(); h++) {
					st[*(tab.begin()+h)].ist=0;
					st[*(tab.begin()+h)].pos=-1;
					tab.erase(tab.begin()+h);
				}
			}
			for(int x:tab) {
				ans[x]++;
				tab.clear();
			}
		}
	}
	
	for(int i=1; i<=m; i++) cout<<ans[i]<<" ";
	
	return 0;
}
