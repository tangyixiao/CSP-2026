#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int cnt[M],a[N],lst[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n;i>0;i--){
		if(!lst[a[i]]){
			lst[a[i]]=i+1;
		}
	}
	for(int i=1;i<=n;i++){
		int j=i;
		while(j<=n){
			cnt[a[j]]++;
			j=lst[a[j]];
		}
	}
	for(int i=1;i<=m;i++)printf("%d ",cnt[i]);
	return 0;
} 