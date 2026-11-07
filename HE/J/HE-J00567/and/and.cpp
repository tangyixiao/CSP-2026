#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans;
bool v[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i],v[i]=1;
	for(int k=29;~k;k--){
		int cnt=0;
		for(int i=1;i<=n;i++)
			if(v[i]&&((a[i]>>k)&1))
				cnt++;
		if(cnt>=m){
			ans|=(1<<k);
			for(int i=1;i<=n;i++)
				if(!((a[i]>>k)&1))
					v[i]=0;
		}
	}
	cout<<ans;
	return 0;
}
