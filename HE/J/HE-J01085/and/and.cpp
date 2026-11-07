#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=200005;
int n,m,a[MAXN],ans;
bool b[MAXN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=29;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(!b[i]&&(a[i]>>j)&1)cnt++;
		}
		if(cnt<m)continue;
		ans|=(1<<j);
		for(int i=1;i<=n;i++){
			if(!b[i]&&!((a[i]>>j)&1))b[i]=1;
		}
	}
	cout<<ans;
	return 0;
}
