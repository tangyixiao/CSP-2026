#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m,a[500010],cnt[500010],last[500010];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(m<=3000){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=n;i>=1;i--){
			if(last[a[i]]==0){
				last[a[i]]=i;
			}
		}
		for(int i=1;i<=n;i++){
			int l=i;
			while(l<=n){
				cnt[a[l]]++;
				l=last[a[l]]+1;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<' ';
		}
		return 0;
	}
	else{
		if(n<=2e5&&m<=1e5){
			for(int i=2;i<=n;i++){
				if(a[i]!=a[i-1]){
					cnt[a[i-1]]=i-1;
				}
			}
			cnt[a[n]]=n;
			for(int i=1;i<=m;i++){
				cout<<cnt[i]<<' ';
			}
			return 0;
		}
	}
	return 0;
}
