#include<bits/stdc++.h>
using namespace std;
vector<int> pos[300005];
int res[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500005];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
		pos[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		bool vis[n+5]={0};
		for(int j=i;j<=n;j++){
			for(int p=0;p<pos[a[j]].size();p++){
				if(pos[a[j]][p]>=j) break;
				if(!vis[pos[a[j]][p]] && pos[a[j]][p]>=i)
					for(int x=pos[a[j]][p];x<j;x++)
						vis[x]=1;
			}
		}
		for(int j=i;j<=n;j++)
			if(!vis[j])
				res[a[j]]++;
	}
	for(int i=1;i<=m;i++) printf("%d ",res[i]);
	return 0;
}
