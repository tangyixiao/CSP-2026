#include<bits/stdc++.h>
using namespace std;
long long n, m, b=0, c=0, d = -1, ans=0;
struct Node{
	long long s;
	long long e;
}a[200005];
long long er(long long x){
	long long y = 0, z=1;
	while(x){
		y += (x/2)*z;
		x = x/2;
		z = z*10;
	}
}
long long cmp(Node p, Node q){
	return p.s > q.s;
}
long long bi(long long E, long long F){
	c=1;
	b=0;
	while(E){
		if(E/10 == F/10){
			b = E/10*c;
		}
		c = c*10;
		E = E/10;
		F = F/10;
	}
	cout << b;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("ans.out", "w", stdout);
	cin >> n >> m;
	for(long long i=1; i<=n; i++){
		cin >> a[i].s;
		a[i].e  = er(a[i].s);
	}
	sort(a+1, a+n+1, cmp);
	cout << a[0].s;
	if(m > 2){
		for(long long i=m-1; i>0; i--){
			d = max(d, bi(a[i].e, a[i-1].e));
		}
	}
	long long r=1;
	while(d){
		ans += d/10*r;
		d = d/10;
		r = r*2;
	}
	cout << ans;
	return 0;
}
