#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int maxn = 5e5+10;
int n,m;
int a[maxn],last[maxn],cnt[maxn];
ll sub[maxn]; 
int main(){
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		cnt[a[i]]++;
		last[a[i]]=i; 
	}
	for(int i=1;i<=n;i++){
		if(last[i]){
			sub[last[i]]=cnt[i];
		}
	}
	for(int i=1;i<=n;i++){
		if(last[a[i]]==i){
			if(i+1<=n){
				int par=last[a[i+1]];
				sub[par]+=sub[i];
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",sub[last[i]]);
	}
	return 0;
} 