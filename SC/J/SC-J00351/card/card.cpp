#include<bits/stdc++.h>
using namespace std;
int a[500005];
//and
int oc[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n-1;i>=1;i--){
		int past=0;
		int o[1005];
		for(int j=i;j<=n;j++){
			o[a[j]]++;
			oc[a[j]]++;
			if(o[a[j]]==2){
				int p=j-1;
				while(a[p]!=a[j]){
					oc[a[p]]--;
					o[a[p]]--;
					p--;
				}
				oc[a[p]]--;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<oc[i]<<" ";
	}
	return 0;
}