#include<bits/stdc++.h>
using namespace std;
const int N=2e5+111;
int a[N];
bool t[N];
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	long long ans=0;
	for(int i=31;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(t[j]){
				continue;
			}
			if(((a[j]>>i)&1)==0){
				continue;
			}
			cnt++;
		}
		if(cnt<m){
			continue;
		}
		ans|=(1ll<<i);
		for(int j=1;j<=n;j++){
			if(((a[j]>>i)&1)==0){
				t[j]=1;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
/*
5 3
31 3 1 15 7

4 2
3 15 12 12
*/
