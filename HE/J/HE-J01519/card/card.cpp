#include<bits/stdc++.h>
using namespace std;
const int N=1e5*5+10;
int n,m;
int pai[N];
int zhuo[N];
int ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>pai[i];
	}
	for(int i=1;i<=n;i++){
		int p=1;
		for(int j=i;j<=n;i++){
			for(int x=1;x=p;x++){
				if(zhuo[x]==pai[j]){
					p=x;
					break;
				}
			}
			zhuo[p]=pai[j];
			p++;
		}
		for(int j=1;j<p;j++){
			ans[zhuo[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
