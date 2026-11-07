#include <bits/stdc++.h>
struct node{
	int f;char s;
}a[200005];
int n,i=1,j=n;
long long ans,cnt;
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++) {cin >> a[i].f >> a[i].s;cnt+=a[i].f;}
	while (cnt > 0){
		if (a[i].s != a[j].s) ans += min(a[i].f,a[j].f);
		a[i].f -= min(a[i].f,a[j].f);
		a[j].f -= min(a[i].f,a[j].f);
		if (a[i].f == 0) i++;
		if (a[j].f == 0) j--;
		cnt -= 2*min(a[i].f,a[j].f);
	}
	cout << ans;
	return 0;
}
