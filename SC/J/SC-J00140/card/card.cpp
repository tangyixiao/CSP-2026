#include<bits/stdc++.h>
using namespace std;
int a[500005],top_,m,n,h[300005],ans_[300005],z[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		top_=0;
		for(int j=i;j<=n;j++){
			if(h[a[j]]==0){
				z[++top_]=a[j];
				h[a[j]]=1;
			}else{
				int t=-1;
				while(t!=a[j] && top_>0){
					t=z[top_--];
					h[t]=0;
				}
				z[++top_]==a[j];
				h[a[j]]=1;
			}
		}
		for(int j=1;j<=m;j++){
			if(h[j]==1)ans_[j]++;
			h[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans_[i]<<' ';
	}
	return 0;
}