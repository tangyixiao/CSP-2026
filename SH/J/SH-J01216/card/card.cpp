#include<bits/stdc++.h>
using namespace std;
int a[500005];
int ans[300005];
int n,m;
void calc(int l,int r,int ro){
	for(int i=ro;i<=l;i++){
		ans[a[i]]++;
	}
	for(int i=r+1;i<=n;i++){
		ans[a[i]]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int siz=n-i+1;siz>0;siz--) {
			bool f=false;
			for(int j=i;j<=n-siz+1;j++){
				if(a[j]==a[j+siz-1]){
					calc(j,j+siz-1,i);
					cout<<j<<' '<<j+siz-1<<'\n';
					f=true;
					break;
				}
			}
			if(f) break;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}
