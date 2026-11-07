#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6+1;
char ans[MAXN];
int kkksc03;
inline int check(int u) {
	for(int i=1; i<=u; i++) {
		if(u%2==1) {
			for(int j=1; j<=u/2; j++) {
				for(int k=u; k>=u/2+2; k--) {
					if (ans[j]==ans[k]) {
						kkksc03=j;
						return true;
					}
					return false;
					break;
				}
			}
		}
	}
}  //abcdcba
int main() {
	ios::sync_with_stdio(false);
	int cnt=0;
	freopen ("string.in","r",stdin);
	freopen ("string.out","w"stdout);
	int n;
	cin>>n;
	int u,v;
	for(int i=1; i<=n; i++) {
		cin>>u>>v;
		for(int j=1; j<=u; j++) {
			ans[i]=u;
		}
		cnt+=u;
	}
	if (check(cnt)) {
		cout<<"0";
		return 0;
	} else {
		check(cnt);
		cout<<kkksc03;
	}

	return 0;
}
