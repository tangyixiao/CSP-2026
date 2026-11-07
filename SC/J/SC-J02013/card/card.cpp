#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,t2[N],a[N],b[N],vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int p=1;p<=n;p++){
		vis[p-1]=1;
		int t1[N]={0};
		for(int i=1;i<=n;i++){
			if(vis[i]==0){
				t1[a[i]]++;
				if(t1[a[i]]==1){
					b[i]=a[i];
				}
				else{
					for(int j=1;j<=i;j++)
						if(b[j]==a[i]){
							for(int k=j;k<=i;k++){
								if(vis[k]!=0) continue;
								vis[k]=1;
								t1[a[k]]=0;
							}
							t1[a[i]]++;
							break;
						}
					else continue;
				}
			}
		}
		for(int i=1;i<=m;i++)
			t2[i]+=t1[i];
		for(int i=p;i<=n;i++) vis[i]=0;
	}
	for(int i=1;i<=m;i++) cout<<t2[i]<<" ";
	return 0;
}