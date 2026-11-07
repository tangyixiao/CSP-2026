#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010];
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	int ma=-1;
	for(int i=1;i<(n-m+1);i++){
		int sl=a[i];
		for(int j=i;j<=i+m-1;j++){
			sl=(sl&a[j]);
		}
		ma=max(ma,sl);
	}
	cout<<ma;
	return 0;
} 