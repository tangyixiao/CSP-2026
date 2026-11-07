#include<bits/stdc++.h>
using namespace std;
int n,m,x,ans[200005];
queue<int>a[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    while(m--){
    	for(int i=1;i<=n;i++){
    	    cin>>x;
    	    a[i].push(x);
    	    for(int j=i;j>=n;j--){
    		    if(a[i]==a[j]){
    			    while((j-i)<0){
    				    a[1].pop();
				    }
			    }
		    }
	    }
		for(int i=1;i<=m;i++){
			if(a[i]==i){
				ans++
				continue;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<ans[i];
	}
	return 0;
}
