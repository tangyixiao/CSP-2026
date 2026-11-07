#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500005],n,m,shu[500005],o,_a[500005];
signed main(){
	//×¢ÒâÇåÁã£¡£¡£¡ 
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		_a[i]=a[i]; 
	}
	for(int i=1;i<=m;i++){
		for(int j=i-1;j<n;j++){
			for(int k=0;k<=j-1;k++){
				if(a[k]==-1){
					continue;
				}
				if(a[k]==a[j]){
					for(int o=k;o<=j-1;o++){
						a[o]=-1;
					}
				}
			}
		}
		for(int j=i-1;j<n;j++){
			if(a[j]==j+1){
				shu[i]++;
			}
		}
		for(int j=0;j<n;j++){
			a[i]=_a[i];
		}
	}
	for(int i=1;i<=n;i++){
		cout<<shu[i]<<" ";
	}
	return 0;
}
