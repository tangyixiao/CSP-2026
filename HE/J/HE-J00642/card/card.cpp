#include<bits/stdc++.h>
using namespace std;
const int N=5e5+50,M=3e5+50;
int n,m,a[N],o;
int ans[M],tot,f;
map<int,int> p;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	if(a[i]<a[i-1]){
    		o=1;
		}
	}
	if(o==0){
		for(int i=1;i<=n;i++){
			ans[a[i]]=i;
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
	}
	else{
		for(int i=n;i>=1;i--){
    		if(tot==m){
    			break;
			}
			for(int j=1;j<=n;j++){
				for(int k=j;k<=n;k++){
					for(int o=k+1;o<=n;o++){
						if(a[o]==a[k]){
							k=o;
							break;
						}
					}
					if(a[k]==i){
						ans[i]++;
						break;
					}
				}
			}
    	}
	    for(int i=1;i<=m;i++){
		    cout<<ans[i]<<' ';
    	}
	}
	return 0;
}
