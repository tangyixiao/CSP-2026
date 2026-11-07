#include<bits/stdc++.h>
#define ll long long
#define maxn 100000
using namespace std;
int a[maxn], t[maxn], ans[maxn], cnt[maxn];
int n, m;

void breakk() {
	for (int i=1; i<=n; i++) 	t[i]=0;
}
void breakk1() {
	for (int i=1; i<=n; i++) cnt[i]=0;
}

int main () {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	for (int i=1; i<=n; i++) cin>>a[i];
	for (int i=1; i<=n; i++) {
		breakk();
		breakk1();
		int sum=1;
		for (int j=i; j<=n; j++) {
			int x=0;
			cnt[sum]=a[j];
			t[a[j]]++;
			if (t[a[j]]>1) {
				for (int k=1; k<=j; k++) {
					if (a[k]==a[j]) {
						x=k;
						break;
					}
				}
				for (int k=x+1; k<=n; k++) cnt[k]=0;
				breakk();
				for (int k=1; k<=x; k++) t[cnt[k]]++;
				sum=x;
			}
			sum++;
		}
		for (int j=1; j<=n; j++) ans[cnt[j]]++;
	}
	for (int i=1; i<=m; i++) cout << ans[i] << " ";
	
	
	return 0;
}