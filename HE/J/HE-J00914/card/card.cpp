#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int n,m,a[maxn];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans[maxn];
	for(int i=1;i<=n;i++){
		int a1[maxn];
		int x,y;
		int i1=0;
		for(int j=i;j<=n;j++){
			i1++;
			a1[i1]=a[j];
			for(int k=i;k<=n;k++){
				if(a1[k]==a[j]){
					x=k;
					y=i1;
				}
			}
		}
		for(int j=1;j<=n;j++){
			int ans1=0;
			if(j==x || j==y) continue;
			if(a[j]==j) ans1++;
			ans[j]=ans1;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i];
	
	
	return 0;
}
