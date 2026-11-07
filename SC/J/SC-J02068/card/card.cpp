#include<bits/stdc++.h>
using namespace std;
int ans[1000005];
int now[1000005];
int a[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i = n;i>=1;i--){
		cin>>a[i];
	}
	for(int i = n;i>=1;i--){
	    for(int j = i;j>=1;j--){
	    	int x = i-j+1;
	    	for(int k = 1;k<=i-j+1 ;k++){
	    		if(now[k]==a[j]){
	    			x = k;
				}
				for(int k = x;k<i-j+1;k++){
					now[k]=0;
				}
				
			}
	    	now[i-j+1] = a[j];
			
		}
		for(int j = 1;j<=n;j++){
			ans[now[j]]++;
		}
		memset(now,0,sizeof(now));
	}
	for(int i = 1;i<=m;i++){
		cout<<ans[i]<<" "; 
	}
	return 0;
}