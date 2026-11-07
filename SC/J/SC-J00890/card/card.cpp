#include <bits/stdc++.h>
using namespace std;
const int maxv=3e5+5;
const int maxn=3e5+5;
int kk[maxv];
int mj[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;cin>>a;
		for(int j=1;j<=i;j++){
			if(kk[j]==a){
				//j到i-1作废
				for(int rp=j;rp<=i-1;rp++){//我也要rp++
					kk[rp]=-1;
				}
			}
		}
		kk[i]=a;
		for(int j=1;j<=i;j++) mj[j]++;
	}
	for(int i=1;i<=m;i++) cout<<mj[i]<<' ';
	return 0;
}