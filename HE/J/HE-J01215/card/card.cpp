#include<bits/stdc++.h>
using namespace std;
const int N=5e4+50;
long long n,m,a[N],vis[N],ans[N];
stack<long long > v;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int o=1;o<=n;o++){
		for(int k=1;k<=m;k++)vis[k]=0; 
		for(int i=o;i<=n;i++){
			if(vis[a[i]]==0){
				ans[a[i]]++;
				vis[a[i]]=1;
				v.push(a[i]);
			}else{
				while(v.top()!=a[i]){
					vis[v.top()]=0;
					ans[v.top()]--;
					v.pop();
				}
			}
		}
	}
	for(int i=1;i<m;i++) cout<<ans[i]<<" ";
	cout<<ans[m];
	return 0;
}
