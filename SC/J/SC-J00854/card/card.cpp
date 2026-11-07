#include<bits/stdc++.h>
using namespace std;
int n,m,ans,cnt[300002],c[300002],d[300001];
struct node{
	int n,w;
}a[500001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].n;
		c[a[i].n]++;
		if(c[a[i].n]==2){
			a[i].w=d[a[i].n];
			d[a[i].n]=i;
			c[a[i].n]=0;
		}
		else d[a[i].n]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			bool b=true;
			for(int o=j+1;o<=n;o++){
				if(a[o].w>=i&&a[o].w<=j) b=false;
			}
			if(b==true) {
				cnt[a[j].n]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}