#include<bits/stdc++.h>
using namespace std;
const int N = 500005;
int n,m,a[N],co[N],c[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;++i){
		cin >> a[i];
	}
	if(n<=5000&&m<=3000){
		for(int i = 1;i<=n;++i){
			for(int j = 1;j<=n;++j){
				c[j] = 0;
			}
			for(int j = i;j<=n;++j){
				c[j] = a[j];
				for(int k = i;k<j;++k){
					if(c[k] == a[j]){
						for(int t = k;t<j;t++){
							c[t] = 0;
						}
					}
				}
			}
			for(int j = 1;j<=n;++j){
				co[c[j]]+=1;
			}
		}
		for(int i = 1;i<=m;++i){
			cout << co[i] << " ";
		}
	}
}
