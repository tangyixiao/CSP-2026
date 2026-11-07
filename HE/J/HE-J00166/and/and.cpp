#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+10;
int a[N],maxn=-N,n,m;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++)cin>>a[i];
	if(m==1)
		for(int i = 1;i <= n;i++)
			maxn=max(maxn,a[i]);
	if(m==2){
		for(int i = 1;i < n;i++)
			for(int j = i+1;j <= n;j++)
				maxn=max(a[i]&a[j],maxn);
		cout<<maxn;
		return 0;
	}
	if(m==n){
		maxn=a[1];
		for(int i = 2;i <= n;i++) maxn&=a[i];
		cout<<maxn;
		return 0;
	}
	if(m==n-1){
		int max1=a[2];
		for(int i = 3;i <= n;i++) max1&=a[i];
		maxn=a[1];
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(j==i)continue;
				maxn&=a[j];
			}
		}
		cout<<max(maxn,max1);
		return 0;
	}
	return 0;
} 
