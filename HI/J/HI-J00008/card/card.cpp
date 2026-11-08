#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005]={0},b[300005]={0},cnt[200005],ans[300005]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool is=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			is=false;
		}
	}
	if(is){
		int cc=0;
		for(int i=1;i<=n;i++){
			if(a[i]>a[i-1]){
				ans[a[i]]=i;
			}
			else{
				ans[a[i]]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
		return 0;
	}
	vector<int>u;
	for(int i=1;i<=n;i++){
		if(b[a[i]]==0){
			cnt[i]=i;
		}
		else{
			cnt[i]=b[a[i]];
		}
		b[a[i]]=i;
	}
	for(int j=1;j<=n;j++){
		bool v[200005]={false};
		bool vv[300005]={false};
		for(int i=j;i<=n;i++){
			v[i]=true;
			if(cnt[i]>=j&&v[cnt[i]])
			for(int k=cnt[i];k<i;k++){
				v[k]=false;
			}
		}
		for(int i=j;i<=n;i++){
			if(v[i]){
				vv[a[i]]=true;
			}
		}
		for(int i=1;i<=m;i++){
//			cout<<vv[i]<<" ";
			ans[i]+=vv[i];
		}
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
