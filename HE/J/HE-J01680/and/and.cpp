#include <bits/stdc++.h>
using namespace std;

long long a[200005], b[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	int n,m,key1,key2;
	long long maxn1=0, minn1=0x3f3f3f3f, maxn2=0, minn2 = 0x3f3f3f3f;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		b[i] = a[i];
		if(a[i] >= maxn1){
			maxn1=max(maxn1,a[i]);
			key1=i;
		}
		if(a[i] <= minn1){
			minn1=min(minn1,a[i]);
			key2=i;
		}
	}
	a[key1]=-1, b[key2] = 0x3f3f3f3f;
	for(int i=1; i<=n; i++){
		maxn2=max(maxn2,a[i]);
		minn2=min(minn2,b[i]);
	}
	if(m==1)
		cout << maxn1;
	else if(m==2)
		cout << (maxn1&maxn2);
	else if(m==n)
		cout << (maxn1&minn1);
	else if(m==(n-1))
		cout << (maxn1&minn2);
	return 0;
}
