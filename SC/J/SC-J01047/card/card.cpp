#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N],mp[N],poker[N],ans[N];
int n,m; 
void solve(int x){
	int idx=1;
	for(int i=x;i<=n;i++){
		if(mp[a[i]]==0){
			mp[a[i]]++;
			poker[idx]=a[i];
			idx++;
		}else{
			for(int j=idx-1;j>=1;j--){
				if(poker[j]!=a[i]){
					mp[poker[j]]--;
				}else{
					idx=j+1;
					break;
				}
			}
			
		}
	}
	for(int i=1;i<=m;i++){
		ans[i]+=mp[i];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		memset(poker,0,sizeof(poker));
		memset(mp,0,sizeof(mp));
		solve(i);
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
}