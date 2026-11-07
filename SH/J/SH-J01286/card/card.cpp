#include<bits/stdc++.h>
using namespace std;
int a[500005],cnt[300005];
vector<int> cur;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		for(int k=i;k<n;k++){
			for(int j=0;j<(int)cur.size();j++){
				if(cur[j]==a[k]){
					cur.resize(j);
					break;
				}
			}cur.push_back(a[k]);
		}for(int j=0;j<(int)cur.size();j++)cnt[cur[j]]++;
		cur.resize(0);
	}for(int i=1;i<=m;i++)printf("%d ",cnt[i]);
	return 0;
}
