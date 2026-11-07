#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+100;
ll n,m;
ll a[N];
bool vis[N];
bool f[N];
ll sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vis[i] = 0;
		f[i] = 0;
	}
	for(int i=30;i>=0;i--){
		sum = 0;
		for(int j=1;j<=n;j++){
			if(vis[j] == 0&&((1<<i)&a[j])){
				sum += 1;
				f[j] = 1;
			}
		}
		if(sum >= m){
			for(int j=1;j<=n;j++){
				if(!f[j]){
					vis[j] = 1;
				}
			}
		}
		for(int j=1;j<=n;j++){
			f[j] = 0;
		}
	}
	sum = -1;
	for(int i=1;i<=n;i++){
		if(sum == -1&&!vis[i]){
			sum = a[i];
		}
		else if(!vis[i]){
			sum = (sum&a[i]);
		//	cout<<a[i]<<"\n";
		}
//		if(vis[i]){
//			cout<<a[i]<<"\n";
//		}
	}
	cout<<sum;
	return 0;
}
/*
5 3
31 3 1 15 7
*/
