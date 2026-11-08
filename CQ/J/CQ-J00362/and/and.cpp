/*
脆香米被吃完了呜呜呜
脆香米被吃完了呜呜呜
脆香米被吃完了呜呜呜
脆香米被吃完了呜呜呜
脆香米被吃完了呜呜呜
脆香米被吃完了呜呜呜
脆香米被吃完了呜呜呜
脆香米被吃完了呜呜呜
*/
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
const int M=35;
int n,m,pw[M],ans,t[M],a[N];
bool cmp(int x,int y) {
	return x>y;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	pw[0]=1;
	for (int i=1;i<=30;i++) {
		pw[i]=pw[i-1]*2;
	}
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		int x=a[i];
		for (int j=30;j>=0;j--) {
			if (x>=pw[j]) {
				x-=pw[j];
				t[j]++;
			}
		}
	}
	for (int i=30;i>=0;i--) {
		if (t[i]>=m) {
			break;
		}
		else {
			for (int j=1;j<=n;j++) {
				if (a[j]>=pw[i]) {
					a[j]-=pw[i];
				}
			}
		}
	}
	sort(a+1,a+1+n,cmp);
	ans=a[1];
	for (int i=2;i<=m;i++) {
		ans=(ans&a[i]);
	}
	cout << ans;
	return 0;
} 
/*
5 3
31 3 1 15 7
*/
