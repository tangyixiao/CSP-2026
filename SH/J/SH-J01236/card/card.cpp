#include<bits/stdc++.h>
using namespace std;
long long n, m, a[500005], vis[300005], lst[500005], ans[300005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		long long cnt=0;
		memset(vis, 0, sizeof vis);
		for(long long j=i;j<=n;j++){
			cnt++;
			if(vis[a[j]]){
				long long c=cnt;
				for(long long k=vis[a[j]];k<c;k++){
					vis[lst[k]]=0;
					lst[k]=0;
					cnt--;
				}
			}
			vis[a[j]]=cnt;
			lst[cnt]=a[j];
		}
		for(long long j=1;j<=cnt;j++){
			ans[lst[j]]++;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<< ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
