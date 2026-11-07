#include<bits/stdc++.h>
using namespace std;
int cnt[500010];
struct e{
	int a;
	bool bo;
}f[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>f[i].a;
		f[i].bo=true;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!f[j].bo)continue;
			for(int q=j+1;q<=n;q++){
				if(f[j].a==f[q].a){
					for(int s=j;s<q;s++) f[s].bo=false;
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(f[j].bo){
				cnt[f[j].a]++;
			}
			f[j].bo=true;
		}
	}	
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
