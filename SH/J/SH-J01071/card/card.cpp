#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int b[500010];
int ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	n+=1;
	while(n--){
		for(int i=1;i<=n;i++){
			b[i]=a[i]; 
			for(int j=0;j<i;j++){
				if(b[j]==a[i]){
					for(int k=j;k<i;k++){
						b[k]=-1;
					}
				}
			}
		}	
		for(int i=1;i<=n;i++){
			ans[b[i]]++;
		}
		for(int i=1;i<=n;i++){
			b[i]=0;
		}
		for(int i=1;i<=n;i++){
			a[i]=a[i+1];
		} 
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
