#include<bits/stdc++.h>
#define int long long
using namespace std;
struct YBAKIOI{
	int a,vis;
}a[200010];
int n,m,maxx=0;
bool cmp(YBAKIOI x,YBAKIOI y){
	return (maxx&x.a)-maxx>=(maxx&y.a)-maxx;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	int pos=0;
	for(int i=1;i<=n;i++){
		cin>> a[i].a;
		if(maxx<a[i].a){
			pos=i;
			maxx=a[i].a;
		}
	}
	a[pos].a=0;
	m-=1;
	sort(a+1,a+n+1,cmp);
	int sum=maxx;
	int t=1;
	while(m--){
		bool f=1;
		while(a[t].a==0){
			t++;
			if(t>n){
				f=0;
				break;
			}
		}
		if(t>n)break;
		if(f){
			sum&=a[t].a;
			a[t].vis=1;
			t++;
		}
	}
	if(m){
		for(int i=1;i<=n;i++){
			if(m>0&&a[i].vis==0){
				sum&=a[i].a;
				m--;
			}
			if(m==0)break;
		}
	}
	cout << sum;
	return 0;
}	       