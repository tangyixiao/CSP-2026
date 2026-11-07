#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];

bool check(int mid){
	int cnt = 0;
	for(int i = 1;i<=n;i++){
		if((a[i] & mid) == mid) cnt++;
	}
	return cnt>=m;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	
	int l = 1,r = 1;
	for(int i = 1;i<=n;i++){
		r = max(r,a[i]);
	}
	
	int ans = 0;
	while(l<=r){
		int mid = (l+r)>>1;
		if(check(mid)){
			ans = mid;
			l = mid+1;
		}
		else r = mid-1;
	}
	cout << ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
