#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		for(int j=i-1;j>=1;j--){
			if (a[i]==a[j]){
				for(int k=i-1;k>j;k--){
					b[a[k]]-=j;
				}
				break;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
