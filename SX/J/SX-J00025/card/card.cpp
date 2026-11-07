#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1000005];

int c[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin >>a[i];
	}
	for(int i=1;i<=n;i++){
		int b[100005];
		for(int j=1;j<=n;j++){
			int d;
			for(int k=1;k<=m;k++){
				if(b[k]==a[j]){
					for(int l=k;i<=m;i++){
						b[l]=0;

					}
					d=k;
				}
			}
			b[d]=a[j];
			d++;
		}
		for(int j=1;j<=m;j++){
			for(int k=1;k<=m;k++){
				if(b[j]==k){
					c[k]++;
				}
			}
		}
	}
	for(int k=1;k<=m;k++){
		cout <<c[k]<<" ";
	}
	return 0;
}