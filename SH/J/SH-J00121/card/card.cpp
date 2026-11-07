#include<bits/stdc++.h>
using namespace std;
int n,m,a[5010],last[5010],right1=0,ans[5010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++){
		int b[5010];
		right1=0;
		memset(last,0,sizeof(last));
		memset(b,0,sizeof(b));
		for(int j=1;j<=n;j++) last[j] = 1e9;
		for(int j=i;j<=n;j++){
			if(last[a[j]] > right1){
				last[a[j]] = right1+1;
				right1++;
				b[right1] = a[j];
			}else{
				right1 = last[a[j]]-1;
				a[++right1] = a[j];
			}
		} 
		for(int j=1;j<=right1;j++) ans[b[j]]++;
	}
	for(int i=1;i<=m;i++) cout << ans[i] << ' ';
}
