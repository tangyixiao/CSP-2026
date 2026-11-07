#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e7+5;
int n,m;
int a[N];
int vis[N];
int cnt[N];
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1){
			flag=0;
		}
		vis[a[i]]++;
	}
	if(flag){
		cout<<n-m;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
//	for(int i=1;i<=n;i++){
//		cout<<vis[a[i]]<<' ';
//	}
	for(int i=1;i<=n;i++){
		cnt[a[i]]+=vis[a[i]];
		for(int j=0;j<=17;j++){
			if(a[i]+(1<<(j+1))>1e7){
				break;
			}
			if((a[i]>>j)%2){
				continue;
			}
			cnt[a[i]]+=cnt[a[i]+(1<<j)];
//			cnt[a[i]]+=cnt[a[i]+(1<<j)]-vis[a[i]+(1<<(j+1))];
		}
		if(cnt[a[i]]>=m){
			cout<<a[i];
			return 0;
		}
	}
	return 0;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/