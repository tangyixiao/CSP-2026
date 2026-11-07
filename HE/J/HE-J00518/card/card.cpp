#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n, m;
long long a[N], ans[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];	
	}
	for(int i=1; i<=n; i++) {
		int f[N]={0};
		int l=0;
		f[++l]=a[i];
		for(int j=i+1; j<=n; j++) {
			int ll=l;
			for(int k=0; k<l; k++) {
				if(f[ll]==a[j]) {
					ll--;
					break;
				}
				ll--;
			}
			l=ll;
			f[++l]=a[j];
		} 
		for(int i=0; i<=l; i++) {
			ans[f[i]]++;
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}
