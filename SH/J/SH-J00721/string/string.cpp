#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,a[N],ans;
char c[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i=1;i<=n;i++) cin >> a[i] >> c[i];
	int l=1,r=n;
	while(l<r){
		if (a[l]==a[r]){
			ans+=a[l]*(c[l]!=c[r]);
			l++;
			r--;
		}
		else if (a[l]>a[r]){
			ans+=a[r]*(c[l]!=c[r]);
			a[l]-=a[r];
			r--;
		}
		else{
			ans+=a[l]*(c[l]!=c[r]);
			a[r]-=a[l];
			l++;
		}
	}
	cout << ans;
	return 0;
}
/*
8:50 开T2
直接模拟时间复杂度会爆炸
考虑双指针
8:59 又忘记开long long了（哭）
9:04 通过下发样例 
*/
