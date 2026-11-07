#include <bits/stdc++.h>
using namespace std;
int n,m;
long long cd[100005],cnt[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>cd[i];
	}
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			cnt[cd[i]]++;
		}
	}
	for(int i=1;i<=m;++i){
		cout<<cnt[i];
	}
	return 0;
} 
