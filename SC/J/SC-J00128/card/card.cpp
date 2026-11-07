#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
const int N=5e5+10,M=3e5+10;
int n,m,a[N],b[N],cnt[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		int j=i;
		while(j<=n){
			cnt[a[j]]++;
			j=b[a[j]]+1;
		}
	}
	for(int i=1;i<m;i++)cout<<cnt[i]<<" ";
	cout<<cnt[m];
	return 0;
}