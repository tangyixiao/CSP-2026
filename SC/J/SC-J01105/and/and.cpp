#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+10,K = 40;
int a[N][K],ans[K];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	queue<int> q;
	int n,m;
	ll c,cnt=0;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> c;
		for(int j=0;j<=30;j++){
			a[i][j] = c&1;
			c >>= 1;
		}
		q.push(i);
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			int f = q.front();
			q.pop();
			cnt += a[f][i];
			q.push(f);
		}
		if(cnt>=m){
			ans[i] = 1;
			int n1 = n;
			for(int j=1;j<=n1;j++){
				int f = q.front();
				q.pop();
				if(!a[f][i]){
					n--;
				}else{
					q.push(f);
				}
			}
		}else{
			ans[i] = 0;
		}
	}
	for(int i=30;i>=0;i--){
		cnt <<= 1;
		cnt += ans[i];
	}
	cout << cnt;
	return 0;
} 