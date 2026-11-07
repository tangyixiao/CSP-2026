#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5;
ll n,m,a[N];
bool cmp(int x,int y) {
	return x>y;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	if(m==1) {
		cout<<a[1];
		return 0;
	}
	if(m==2) {
		int mx=-1;
		for(int i=1; i<n; i++) {
			for(int j=i+1; j<=n; j++) {
				if(a[i]&a[j]>mx)
					mx=a[i]&a[j];
			}
		}
		cout<<mx;
		return 0;
	}
	int k=a[1];
	for(int i=1; i<=m; i++) {
		k=k&a[i];
	}
	cout<<k;

	return 0;
}

