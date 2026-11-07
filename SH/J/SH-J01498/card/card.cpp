#include<bits/stdc++.h>
using namespace std;
int a[200010],b[200010],ans[200010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,cnt=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int l=1;l<=n;l++){
			b[l]=0;
		}
		cnt=1;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=cnt;k++){
				if(a[j]==b[k]){
					for(int l=k+1;l<=cnt;l++){
						b[l]=0;
					}
					cnt=k;
				}
			}
			b[cnt]=a[j];
			cnt++;
		}
		for(int j=1;j<=n;j++){
			ans[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
