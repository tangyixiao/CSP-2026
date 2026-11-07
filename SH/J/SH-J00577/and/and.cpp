#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int b[200005];
bool can[200005];
int ans = (1<<30)-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(can,1,sizeof(can));
	cin>>n>>m;
	for(int i = 1;i<=n;i++)cin>>a[i];
	for(int i = 1;i<=n;i++)b[i] = a[i];
	int mod = (1<<30);
	while(mod>1&&m){
		int cnt = 0;
		for(int i = 1;i<=n;i++){
			if(can[i]&&(a[i]/mod))cnt++;
		}
		if(cnt>=m){
			for(int i = 1;i<=n;i++)if(a[i]/mod == 0)can[i] = 0;
		}
		for(int i = 1;i<=n;i++)a[i] %= mod;
		mod /= 2;
	}
	for(int i = 1;i<=n;i++){
		if(can[i])ans &= b[i];
	}
	cout<<ans;
}
