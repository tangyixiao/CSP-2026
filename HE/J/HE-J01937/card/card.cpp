#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,a[500005],d[500005],ans[300005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		int di=1;
		for(int j=i;j<=n;j++){
			d[di]=a[j];
			for(int k=1;k<=di-1;k++){
				if(d[k]==d[di]){
					d[k]=d[di];
					di=k;
				}
			}di++;
		}
		di--;
		for(int j=1;j<=di;j++){
			ans[d[j]]++;
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}

