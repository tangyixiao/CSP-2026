#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
ll n,m,a[N],ans=(1<<31)-1;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int m1=m;
	for(int k=30;k>=0;k--){
		int usum=0;
		queue<int> q;
		for(int i=1;i<=n;i++){
			int u=a[i]>>k&1;
			usum+=u;
		}
		if(usum>=m){
			for(int i=1;i<=n;i++){
				int u=a[i]>>k&1;
				if(!u) a[i]=0;
			}
		}
	}
	sort(a+1,a+1+n);
	for(int i=n;i>=n-m+1;i--){
		ans=ans&a[i];
	}
	cout << ans;
	return 0;
}/*
5 3
31 3 1 15 7
*/
