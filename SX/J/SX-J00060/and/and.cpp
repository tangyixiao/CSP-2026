#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200010],ans=INT_MAX;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,[](int p,int q){
		return p>q;
	});
	if(m==2){
		int mmax=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mmax=max(mmax,a[i]&a[j]);
			}
		}
		cout<<mmax;
		return 0;
	}
	for(int i=1;i<=m;i++) ans&=a[i];
	cout<<ans;
	return 0;
}
