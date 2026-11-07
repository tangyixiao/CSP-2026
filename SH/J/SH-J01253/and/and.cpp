#include<iostream>
#include<algorithm>
using namespace std;

const int N=200005;
int n, m, a[N];

bool cmp(int x, int y){
	return x>y;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	int mx=0, all;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		mx = max(mx, a[i]);
		if(i==1)
			all = a[i];
		else
			all = all&a[i];
	}
	if(m==1){
		cout << mx;
		return 0;
	} else if(m==n){
		cout << all;
		return 0;
	}
	
	sort(a+1, a+1+n, cmp);
	int ans=a[1];
	for(int i=2; i<=m; i++)
		ans = ans&a[i];
	
	cout << ans;
	
	return 0;
}

