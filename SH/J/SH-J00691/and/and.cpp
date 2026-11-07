#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	if(m>1){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(m>2){
					for(int k=j+1;k<=n;k++){
						if(m>3){
							for(int l=k+1;l<=n;l++){
								if(m>4){
									for(int o=l+1;o<=n;o++){
										if(m>5){
											for(int p=o+1;p<=n;p++){
												if(m>6){
													for(int u=p+1;u<=n;u++) ans=max(ans,(a[i]&a[j])&(a[k]&a[l])&(a[o]&a[p])&a[u]);
												}
												else ans=max(ans,(a[i]&a[j])&(a[k]&a[l])&(a[o]&a[p]));
											}
										}
										else ans=max(ans,(a[i]&a[j])&(a[k]&a[l])&a[o]);
									}
								}
								else ans=max(ans,(a[i]&a[j])&(a[k]&a[l]));
							}
						}
						else ans=max(ans,(a[i]&a[j])&a[k]);
					}
				}
				else ans=max(ans,a[i]&a[j]);
			}
		}
	}else{
		cout<<a[1];
		return 0;
	}
	cout<<ans;
	return 0;
}
