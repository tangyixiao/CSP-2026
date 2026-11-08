#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int pos[300005];
	for(int k=1;k<=n;k++){
		memset(pos,0,sizeof(pos));
		for(int i=k;i<=n;i++){
			if(pos[a[i]]){
				for(int j=pos[a[i]];j<=i;j++){
					pos[a[j]]=0;
				}
			}
			pos[a[i]]=i;
		}for(int i=1;i<=m;i++)if(pos[i])ans[i]++;
	}for(int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	return 0;
}
