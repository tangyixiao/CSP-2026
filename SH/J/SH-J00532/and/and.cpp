#include<bits/stdc++.h>
using namespace std;
int n,m,a,ans,b[35],nn,qf,ix;
queue<int> q;
void ad(int x){
	for(int i=0;i<=ix;i++){
		b[i]+=(x&1);
		x>>=1;
	}
}
bool cmp(int a,int b){ return a>b; }
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	ix=29;
	for(int i=1;i<=n;i++){
		cin >> a;
		ad(a);
		q.push(a);
	}
	for(ix;ix>=0;ix--){
		if(b[ix]>=m){
			for(int i=0;i<=ix;i++) b[i]=0;
			nn=0;
			for(int i=1;i<=n;i++){
				qf=q.front();
				q.pop();
				if((qf>>ix)&1){
					q.push(qf);
					nn++;
					ad(qf);
				}
			}
			n=nn;
		}
	}
	for(int i=29;i>=0;i--){
		ans+=(b[i]>=m?(1<<i):0);
	}
	cout << ans;
	return 0;
}
