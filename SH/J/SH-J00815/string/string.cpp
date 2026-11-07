#include <bits/stdc++.h>
using namespace std;
int n;
const int N = 2e5 + 5;
long long ans;
struct node{
	long long a;
	char c;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long t = 0;
	for(int i = 1;i <= n;i++) cin >> a[i].a >> a[i].c,t += a[i].a;
	t /= 2;
	int l = 1,r = n;
	while(l < r){
		node xa = a[l],xb = a[r];
		long long minn = min(xa.a,xb.a);
		if (xa.c != xb.c) ans += minn;
		a[l].a -= minn;
		a[r].a -= minn;
		if (!xa.a) l++;
		if (!xb.a) r--;
		
	}
	cout << ans;
	return 0;
} 
