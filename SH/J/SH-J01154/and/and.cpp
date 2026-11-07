#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],s[20000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int mx = -1;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		s[a[i]]++;
		mx = max(mx,a[i]);
	}
	int ans;
	ans = mx;
	m -= s[mx];
	s[mx] = 0;
	while(m > 0){
		int ans1 = 0,d;
		for(int i = 1;i <= 200005;i++){
			if(s[i] > 0){
				int ans2 = ans&i;
				if(ans2>ans1){
					ans1 = max(ans1,ans2);
					d = i;
				}
			}
		}
		ans = ans1;
		m -= s[d];
		s[d] = 0;
	}
	cout << ans;
	return 0;
}
