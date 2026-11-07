#include<bits/stdc++.h>
using namespace std;
int a[500010],v[500010];
int ans[500010];
int late[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
int n,m;

    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
    for(int i=1;i<=n;i++){
    	int t=1;
    	memset(late,-1,sizeof(late));
    	for(int j=i;j<=n;j++){
    		v[t]=a[j];
    		
    		if(late[a[j]]<t&&late[a[j]]!=-1){
    			
    			t=late[a[j]];
    			t++;
			}else{
			    late[a[j]]=t;
				t++;
			}
		}
		for(int j=1;j<t;j++){
			ans[v[j]]++;
			
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
