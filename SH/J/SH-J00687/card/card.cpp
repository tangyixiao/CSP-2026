#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005],c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
//		cout<<a[i]<<' ';
	}
	for(int i=1;i<=n;i++){
		bool vis[500005]={0};
		int sum=0;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				bool zzz=0;
				int t=sum;
				for(int k=1;k<=t;k++){
					if(zzz){
						vis[b[k]]=0;
						b[k]=0;
						sum--;
					}
					if(b[k]==a[j]){
						b[k]=0;
						sum--;
						zzz=1;
					}
				}
			}
			vis[a[j]]=1;
			b[++sum]=a[j];
		}
		for(int j=1;j<=sum;j++){
//			cout<<b[j]<<' ';
			c[b[j]]++;
		}
//		cout<<endl;
//		cout<<sum;
	}
	
	for(int i=1;i<=m;i++){
		cout<<c[i]<<' ';
	}
}
