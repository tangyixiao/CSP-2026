#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500005];
long long ans[300005];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++){
		set<int> se;
		for(int j=i;j<=n;j++){
			if (se.find(a[j])!=se.end()){
				se.clear();
				se.insert(a[j]);
			} else{
				se.insert(a[j]);
			}
		}
		for(int y : se){
			ans[y]++;
			if (y==3){
				//cout<<i<<'\n';
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%lld ", ans[i]);
	}
	
} 