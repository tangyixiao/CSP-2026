#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[i]==a[j] && i!=j){
				for(int k=i;k<=j;k++) cnt[a[k]]--;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cnt[a[i]]+=i;
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
} 
