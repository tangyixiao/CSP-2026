#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
long long t[300010];
bool f[300010];
int main(){
	freopen("r","card.in",stdin);
	freopen("w","card.out",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int ta[500010];
		memset(f,0,sizeof f);
		for(int j=i;j<=n;j++){
			ta[j-i+1]=a[j];
		}
//		for(int j=1;j<=n-i+1;j++){
//			cout<<ta[j]
//		}
		for(int j=1;j<=n-i+1;j++){
			for(int k=j-1;k;k--){
				if(ta[k]==ta[j]){
					for(int l=k;l<j;l++){
						ta[l]=0;
					}
					//cout<<k<<' '<<j<<' '<<endl;
				}
			}
		}
		for(int j=1;j<=n-i+1;j++){
			//cout<<ta[j]<<" ";
			if(f[ta[j]]==0){
				t[ta[j]]++;
				f[ta[j]]=1;
			}
		}
	//	cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}
