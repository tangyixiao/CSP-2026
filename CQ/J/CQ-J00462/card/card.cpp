#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],t[500005],k[500005],vis[500005],ans[500005],q,p,id; 
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=5000&&m<=3000){
		for(int s=1;s<=n;s++){
			for(int i=1;i<=n;i++){
				k[i]=0;
				vis[i]=1;
				t[i]=0;
			}
			for(int i=s;i<=n;i++){
				if(k[a[i]]&&vis[k[a[i]]]){
	//				cout<<s<<" "<<i<<"\n";
					for(int j=i-1;j>=k[a[i]];j--){
						vis[j]=0;
					}
				}
				k[a[i]]=i;
			}
			for(int i=s;i<=n;i++){
				if(!t[a[i]]&&vis[i]){
					ans[a[i]]++;
					t[a[i]]=0;
				}
			}
		}
	}
	else{
		p=a[1];q=id=1;
		for(int i=2;i<=n;i++){
			if(a[i]==p) q++;
			else{
				p=a[i];
				q=1;
				id=i;
			}
			ans[a[i]]=max(ans[a[i]],id+q-1);
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
