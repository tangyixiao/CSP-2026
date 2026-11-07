#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[500005];
int sta[500005];
bool h[300005];
int ans[300005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
	}
	for(int l=1;l<=n;++l){
		memset(h,0,sizeof(h));
		int j=1;
		for(int i=l;i<=n;++i){
			sta[j++]=a[i];
			for(int k=1;k<j;++k){
				if(a[i]==sta[k]){
					j=k+1;
					break;
				}
			}
		}
		while(j){
			h[sta[j--]]=1;
		}
		for(int i=1;i<=m;++i){
			ans[i]+=h[i];
		}
	}
	for(int i=1;i<=m;++i){
		printf("%d ",ans[i]);
	}
}
