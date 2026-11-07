#include <iostream>
#define ll long long
using namespace std;
const int MAXN = 2e5;
int n,a[MAXN];
char c[MAXN];
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	for (int i = 1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	int l = 1,r = n;
	while (l < r){
		bool flag1 = (a[l] > a[r]),flag2 = (a[l] == a[r]);
		int num = min(a[l],a[r]);
		cout << l << " " << r << " " << num << " " << a[l] << " " << a[r] << endl;
		if (c[l] != c[r]) ans += num;
		a[l] -= num;a[r] -= num;
		if (flag2) l++,r--;
		else if (flag1) r--;
		else l++;
	}
	cout << ans;
}