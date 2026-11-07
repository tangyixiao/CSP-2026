#include<bits/stdc++.h>
using namespace std;
int n,m, card[200005],left,ans[300005];
int play(int left){
	for(int i=1;i<=n;++i){
		left=1;
		int table[300005];
		for(int j=1;j<=i;++j){
			table[left]=card[j];
			for(int k=1;k<j;++k){
				if(table[k]==card[left]){
					left=k;
					break;
				}
			}
		}
		for(int j=1;j<=left;++j){
			ans[card[j]]++;
		}
	}
	for(int i=1;i<=m;++i)cout<<ans[i]<<' ';
	return 0;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>card[i];
	play(1);
	return 0;
} 