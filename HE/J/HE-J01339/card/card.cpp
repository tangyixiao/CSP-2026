#include<bits/stdc++.h>
using namespace std;
int a[500010],b[500010],c[300010];
set<int> s;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m,z=-1;
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		c[i]=0;
	}
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	for(int k=0; k<n; k++) {
		s.clear();
		z=-1;
		for(int i=k; i<n; i++) {
			int x=a[i];
			int k=s.size();
			s.insert(x);
			if(k!=s.size()) {
				z++;
				b[z]=x;
			} else {
				z--;
				while(b[z]!=x) {
					b[z]=0;
					z--;
				}
				s.clear();
				for(int i=0; i<=z; i++) {
					s.insert(b[i]);
				}
			}
		}
		for(int i=0; i<=z; i++) {
			c[b[i]]++;
		}
	}
	for(int i=1; i<=m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}
