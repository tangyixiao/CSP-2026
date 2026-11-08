#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],bj[200010],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		bj[i]=1;
	}
	for(int q=pow(2,30);q>=1;q/=2){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(bj[i]==0||(a[i]&q)==0)continue;
			cnt++;
		}
		if(cnt<m)continue;
		ans+=q;
		for(int i=1;i<=n;i++){
			if(bj[i]==0||(a[i]&q))continue;
			bj[i]=0;
		}
	}
	cout<<ans;
	return 0;
}
