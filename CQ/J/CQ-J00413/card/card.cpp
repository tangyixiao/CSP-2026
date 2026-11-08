#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
int a[MAXN];
int cnt[MAXN];
int pre[MAXN];
int ans[MAXN];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	bool b=1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		cnt[a[i]]++;
		if(a[i]<a[i-1]){
			b=0;
		}
	}
	if(b==1){
		for(int i=1;i<=m;i++) pre[i]=pre[i-1]+cnt[i];
		for(int i=1;i<=m;i++){
			printf("%d ",pre[i]);
		}
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			if(a[i]==a[n]){
				ans[a[i]]++;
			}
			else{
				ans[a[i]]++;
				ans[a[n]]++;
			}
		}
		for(int i=1;i<=m;i++){
			printf("%d ",ans[i]);
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int s=i;s<=n;){
			for(int f=s+1;f<=n;f++){
				if(a[f]!=a[s]) continue;
				else s=f;
			}
			ans[a[s]]++;
			s++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
} 
