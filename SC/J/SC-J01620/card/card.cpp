#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500010];
int js[5010],zjs[5010];
int qp[5010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int s=0;
		for(int j=1;j<=n;j++){
			if(js[a[i]]!=0){
				s=0;
				for(int z=1;z<=m;z++) js[z]=0;
				for(int z=1;z<=s;z++){
					if(qp[z]!=a[i]){
						qp[s]=a[z];
						js[a[z]]++;
						s++;
					}
					if(qp[z]==a[i]) break;
				}
			}
			qp[s]=a[i];
			js[a[i]]++;
			s++;
		}
		for(int j=1;j<=m;j++) if(js[j]!=0) zjs[j]++;
	}
	for(int i=1;i<=m;i++) cout<<zjs[i]<<" ";
	return 0;
} 