#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10;
const int M=3e5+10;
int arr[N];
bool vis[M];
int cnt[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			vis[i]=0;
		}
		for(int j=i;j<=n;j++){
			int t=arr[j];
			if(vis[t]){
				for(int k=1;k<=m;k++) vis[i]=0;
				vis[t]=true;
			}
			vis[t]=true;
		}
		for(int j=1;j<=m;j++){
			if(vis[j]){
				cnt[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}
