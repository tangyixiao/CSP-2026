#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005],ans[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)b[j]=0;
		for(int j=i;j<=n;j++){
			int f=j-i+1,f2;
			bool f1=0;
			b[f]=a[j];
			for(int k=1;k<f;k++){
				if(b[k]==b[f]){
					f1=1;
					f2=k;
					break;
				}
			}if(f1){
				for(int k=f2;k<f;k++){
					b[k]=0;
				}
			}
		}
		for(int j=1;j<=n;j++){
			ans[b[j]]++;
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
