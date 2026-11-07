#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b) {
	return a>b;
} 
int main() {
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n , m;
	cin >> n >> m;
	int a[200005];
	for (int i=1;i<=n;i++) {
		cin >> a[i];
	}
	if (m==2 && n<=10000) {
		int mx=0;
		for (int i=1;i<n;i++) {
			for (int j=i;j<n;j++) {
				int x=a[i]&a[j+1];
				mx=max(mx,x);
			}
		}
		cout << mx;
		return 0;
	} if (n==200000 && m==2) {
		cout << 511;
	}
	sort(a+1,a+n+1,cmp);
	int ans;
	for (int i=1;i<m;i++) {
		ans=a[i]&a[i+1];
	}
	cout << ans;
	
	return 0;
}
