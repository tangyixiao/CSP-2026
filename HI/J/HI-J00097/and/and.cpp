#include <bits/stdc++.h>
using namespace std;
int n,m;
struct node{
	long long x=0;
	bool f=0;
};
node a[200005];
bool cmp(node u,node v){
	return u.x>v.x;
}
long long ans;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
	}
	int p=32;
	for(int i=p;i>=0;i--){
		long long cnt=0;
		for(int j=1;j<=n;j++){
			if(((a[j].x>>i)&1)&&a[j].f==0) cnt++;
		}
		if(cnt>=m){
			for(int j=1;j<=n;j++){
				if(!((a[j].x>>i)&1)){
					a[j].f=1;
				}
			}
		}
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		if(m&&a[i].f==0){
			if(ans==0) ans=a[i].x;
			else ans&=a[i].x;
			m--;
		}
	}
	cout<<ans;
	return 0;
}
