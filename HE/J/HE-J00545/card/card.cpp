#include<iostream>
const int N = 5e5 + 5;
int ans[N],sz[N],lst[N],n,m,a[N];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i ++) {
		scanf("%d",a + i);
		lst[a[i]] = i,sz[i] = 1;
	}
	for(int i = 1; i <= n; i ++) {
		if(i != lst[a[i]]) sz[lst[a[i]]] += sz[i];
		else sz[i + 1] += sz[i],ans[a[i]] = sz[i];
	}
	for(int i = 1; i < m; i ++)
		printf("%d ",ans[i]);
	printf("%d\n",ans[m]);
	return 0;
}
/*
#include<algorithm>
#include<iostream>
#include<time.h>
const int N = 1e3;
namespace find_best {
	int cnt;
	double ans;
	struct node {
		double x,T,val;
		bool operator < (const node &o) const {
			return val < o.val;
		}
	} a[6*N+100];
	int rng(int l,int r);
	int zt(int l,int r);
	double ln(double x);
	void gift(int id);
	void change(int id,double f(double x),double df(double x)) {
		for(int i = 1; i <= 5.0 / (f(a[id].x) - ans + 1); i ++) {
			double _x = a[id].x - 1.0 * zt(1,20000) / 10000.0 * a[id].T * (2 * (rng(1,10) > 1) - 1) * (df(a[id].x) + rng(-1,1)) * ln(f(a[id].x) - ans + 2);
			a[++ cnt].x = _x,a[cnt].T = a[id].T,gift(cnt);
			if(f(_x) < ans) ans = f(_x);
		}
		gift(id);
	}
	double solve(double f(double x),double df(double x),double eps,double stT) {
		cnt = 1,a[1].x = 0.0,a[1].T = stT,ans = f(a[1].x);
		double maxT = stT;
		while(maxT >= eps) {
			maxT = 0.0;
			int wait;
			int old_cnt = cnt;
			for(int i = 1; i <= old_cnt; i ++)change(i,f,df);
			for(int i = 1; i <= cnt; i ++)a[i].val = f(a[i].x);
			std::sort(a + 1,a + cnt + 1);
			cnt = std::min(N,cnt);
			for(int i = 1; i <= cnt; i ++) if(a[i].T > maxT) maxT = a[i].T;
		}
		return ans;
	}
}
double F(double x) {
	if(x <= -1) return - x - 2;
	if(-1 < x && x <= 5) return x;
	if(5 < x && x <= 11) return -x + 10;
	if(11 < x && x <= 22) return x - 12;
	if(22 < x && x <= 132) return -x + 32;
	if(132 < x && x <= 1e5) return x - 232;
	if(1e5 < x && x <= 1e7) return -x + 19768;
	if(x > 1e7) return x - 19980232;
}
double dF(double x) {
	if(x < -1) return -1;
	if(-1 < x && x < 5) return 1;
	if(5 < x && x < 11) return -1;
	if(11 < x && x < 22) return 1;
	if(22 < x && x < 132) return -1;
	if(132 < x && x < 1e5) return 1;
	if(1e5 < x && x < 1e7) return -1;
	if(1e7 < x) return 1;
	return 0;
}
signed main() {
	srand(time(0)),find_best::solve(F,dF,1e-10,2e5);
}
*/ 
