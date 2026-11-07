#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[510000];
long long hush[310000];
vector<long long> appear[310000];
long long cnt[310000],c;
bool finished[510000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (long long i=1;i<=n;i++){
		cin>>a[i];
		appear[a[i]].push_back(i);
	}
	for (long long i=1;i<=n;i++){
		c=1;
		if (finished[i]){
			continue;
		}
		for (long long j=i;j<=n;j++){
			if (finished[j]){
				c--;
			}
			finished[j]=true;
			for (auto k:appear[a[j]]){
				if (k<=j){
					continue;
				}
				if (finished[k]){
					c--;
				}
				finished[k]=true;
				c++;
				j=k;
			}
			cnt[a[j]]+=c;
			c++;
		}
	}
	for (long long i=1;i<=m;i++){
		printf("%lld ",cnt[i]);
	}
	return 0;
}
