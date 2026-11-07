#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[300005],x[500005];
//a卡牌顺序 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int l=1;
		for(int j=i;j<=n;j++){
			x[l]=a[j];
			for(int k=1;k<l;k++){
				if(x[k]==x[l]){
					l=k;
				}
			}
			l++;
		}
		for(int j=1;j<l;j++){
			ans[x[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
//D
//开火车 