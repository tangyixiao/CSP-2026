#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int b[500010];
int cnt[500010];
int main(){
	freopen("card4.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>=5000){
		for(int i=1;i<=n;i++){
			cnt[a[i]]++;
		}
		for(int i=2;i<=m;i++){
			cnt[i]+=cnt[i-1];
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		int use=1;
		for(int j=i;j<=n;j++){
			for(int v=1;v<use;v++){
				if(b[v]==a[j]){
					b[v]=a[j];
					for(int q=v+1;q<=use;q++){
						b[q]=0;
					}
					use=v;
				}
			}
			b[use]=a[j];
			use++;
		}
		for(int j=1;j<use;j++){
			cnt[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
} 