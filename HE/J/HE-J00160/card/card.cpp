#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+50;
int n,m,t[N],a[N];
bool vis[(int)1e9+50],flag=true;
int32_t main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for(int i=1; i<=n; i++) {
		scanf("%lld",&a[i]);
		if(a[i]!=a[i+1]) {
			flag=false;
		}
	}
	for(int i=1; i<=n; i++) {
		vector<int>v;
		for(int j=i; j<=n; j++) {
			if(!vis[a[j]]) {
				v.push_back(a[j]);
			} else {
				while(v.back()!=a[j]) {
					v.pop_back();
				}
				v.push_back(a[j]);
			}
			for(int k:v) {
				if(k==i) {
					t[i]++;
					break;
				}
			}
		}
		for(int j=1; j<=n; j++) {
			for(int k:v) {
				if(k==i) {
					t[i]++;
					break;
				}
			}
		}
	}
	if(flag) {
		for(int i=1; i<=n; i++) {
			printf("1 ");
		}
	} else {
		for(int i=1; i<=n; i++) {
			printf("%lld ",t[i]);
		}
	}

	return 0;
}
