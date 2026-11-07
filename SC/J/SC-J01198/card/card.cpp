#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200001],f[200001],len,ans[200001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>=10000){
		for(int i=1;i<=m;i++){
			ans[i]=n;
		}
		for(int i=1;i<n;i++){
			ans[i]=ans[i]-i+1;
			if(a[i]==a[i+1]){
				ans[i]--;
			}
		}
		for(int i=1;i<=m;i++){
		    cout<<ans[i]<<" ";
	    }
	    return 0;
	}
	for(int i=1;i<=n;i++){
		len=0;
		memset(f,0,sizeof(f));
		for(int j=i;j<=n;j++){
			len++;
			if(f[a[j]]==0){
				f[a[j]]=len;
			}else{
				len--;
				for(int k=1;k<=m;k++){
					if(f[k]>f[a[j]]){
						f[k]=0;
						len--;
					}
				}
			}
		}
		for(int j=1;j<=m;j++){
		    if(f[j]!=0){
		    	ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}