#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],c[500005],ans[300005];
bool p[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int k=0;
		for(int j=i;j<n;j++){
			if(!p[a[j]]){
				p[a[i]]=1;
				c[k]=a[i];
				k++;
			}
			else{
				bool q=0;
				int l1=0;
				for(int l=0;l<k;l++){
					if(c[l]==a[i]){
						q=1;
						l1=l;
					}
					if(q){
						p[c[l]]=0;
					}
				}
				k=l1;
				c[k]=a[i];
				k++;
			}
		}
		for(int j=1;j<=m;j++){
			if(p[j]) ans[j]++;
		}
		for(int j=1;j<=m;j++) p[j]=0;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}

