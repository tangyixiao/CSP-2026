#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '/n'
int n,m;
int a[200005],b[200005],maxx=-1;
bool s[200005];
void dfs(int d){
	if(d==m){
		maxx=max(a[d],maxx);
	}
	else{
		if(d==1){
	 	    for(int i=1;i<=n;i++){
		    	b[i]=a[i];
    	  		s[i]=0;
			 }
		}
		 for(int i=1;i<=n;i++){
  		 		 if(!s[i]){
   	   			 b[d+1]&=a[i];
  		   	   s[i]=1;
	 		    dfs(d+1); 	   	
				}
		 }
	}
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<maxx;
	return 0;
}
