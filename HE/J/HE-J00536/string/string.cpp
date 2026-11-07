#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int n;
long long a[maxn];
long long tmp;
char c[maxn];
long long ans,l=1,r;
//样例测试起来没问题，全测了一遍 9：17 半个多钟头就做了两道
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	while(l<r){
		if(c[l]==c[r]){
			tmp=min(a[l],a[r]);
			a[l]-=tmp;
			a[r]-=tmp;
			if(a[l]==0) l++;
			if(a[r]==0) r--;
		}
		else{
			ans+=min(a[l],a[r]);
			tmp=min(a[l],a[r]);
			a[l]-=tmp;
			a[r]-=tmp;
			if(a[l]==0) l++;
			if(a[r]==0) r--;
		}
	}
	cout<<ans;
	return 0;
}
