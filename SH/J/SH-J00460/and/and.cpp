#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	vector<bool> p(n,true);
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int k=30;k>=0;k--){
		int cnt=0;
		for(int i=0;i<n;i++){
			if(p[i]&&(a[i]&(1<<k))){
				cnt++;
			}
		}
		
		if(cnt<m) continue;
		ans|=(1<<k);
		for(int i=0;i<n;i++){
			if((a[i]&(1<<k))==0){
				p[i]=false;
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}
