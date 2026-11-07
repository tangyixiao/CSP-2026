#include<bits/stdc++.h>
using namespace std;
#define int long long

int a[500005],ans[500005];
int s[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	} 
	for(int i=1;i<=n;i++){
		vector<int> cnt(m+5);
		for(int j=i;j<=n;j++){
			int op=j-1;
			while(cnt[a[j]]){
				cnt[s[op]]=0;
				s[op]=0;
				op--;
			}
			cnt[a[j]]=1;
			s[j]=a[j];
		}
		for(int j=i;j<=n;j++){
			ans[s[j]]++;
			s[j]=0;
		}	
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << " ";
	}
	return 0;
} 
