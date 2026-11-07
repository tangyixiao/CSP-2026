#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int sum[300005];
int e[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		e[a[i]]=max(e[a[i]],i);
	}
	for(int i=1;i<=n;i++){
		int l=i;
		while(l<=n){
			sum[a[l]]++;
			if(e[a[l]]==l){
				l++;
			}else{
				l=e[a[l]]+1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}