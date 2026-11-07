#include<bits/stdc++.h>
using namespace std;
int n,m,ans[30005],a[50005],card[50005];
int main(){
	freopen("card.in","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<=n;k++){
		int r=0;
		for(int i=k;i<=n;i++){//
			card[++r]=a[i];
			for(int j=1;j<r;j++){
				if(card[j]==a[i]){
					r=j;
					break;
				}
			}
		}
		for(int i=1;i<=r;i++)ans[card[i]]++;
	}
	cout<<endl;
	freopen("card.out","w",stdout);
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
}
