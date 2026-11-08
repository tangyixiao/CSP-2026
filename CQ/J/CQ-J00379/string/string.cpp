#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int n;
int a[200005];
char c[200005];
int l, r;
long long ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i] >> c[i];
	l = 1, r = n;
	long long cnt1 = 0, cnt2 = 0;
	while(l<=r){
		if(c[l]!=c[r]){
			if(cnt1+a[r]>a[l]){
				ans+=cnt2;
				ans+=(a[l]-cnt1);
				a[r]-=(a[l]-cnt1);
				cnt1 = cnt2 = 0;
				l++;
			}
			else{
				cnt1+=a[r];
				cnt2+=a[r];
				r--;
			}
		}
		else{
			if(cnt1+a[r]>a[l]){
				ans+=cnt2;
				a[r]-=(a[l]-cnt1);
				l++;
				cnt1 = cnt2 = 0;
			}
			else{
				cnt1+=a[r];
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}
